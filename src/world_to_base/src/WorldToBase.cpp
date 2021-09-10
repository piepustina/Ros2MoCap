#include <WorldToBase.h>
#include <stdio.h>
#include <Eigen/Dense>
#include <WtoBconfig.h>//include the configuration file
 
using namespace Eigen;

WorldToBase::WorldToBase(): Node("mo_cap_subscriber")
{
  //Save the rotation matrix from the Motion frame to the base robot frame
  this->R_0_B = this->quatToRotm(BASE_QX, BASE_QY, BASE_QZ, BASE_QW);
  //std::cout << this->R_0_B << std::endl;
  //Save the offset
  this->offset << INITIAL_OFFSET_X, INITIAL_OFFSET_Y, INITIAL_OFFSET_Z;
  this->subscription_ = this->create_subscription<mocap_interfaces::msg::RigidBodyArray>(
    "rigid_body_topic", 10, std::bind(&WorldToBase::rigid_body_topic_callback, this, _1));
}

//Callback to receive rigid body messages
void WorldToBase::rigid_body_topic_callback(const mocap_interfaces::msg::RigidBodyArray::SharedPtr msg) const
{
  //RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());
  // Transform the pose of all the rigid bodies from the frame of the motion capture system to the base frame of the robot
  transformPose(msg);
}

// Method that transforms the pose of the rigid bodies expressed in the motion capture system into the base frame of the robot
void WorldToBase::transformPose(const mocap_interfaces::msg::RigidBodyArray::SharedPtr msg) const
{
  Vector3f P, P_base;//P_base is the position of the robot base recorded by Motive
  Vector4f P_1;
  Matrix3f R, R_base;//R_base is the orientation of the robot base recoded by Motive
  Matrix4f T_0_B;//transformation matrix from the motion capture system to the robot base frame

  P_base << 0,0,0;
  R_base << 0,0,0,0,0,0,0,0,0;
  T_0_B  << 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1;
  P_1 << 0,0,0,1;

  int i,i_base = -1;
  // Get the pose of the base of the robot recorded by Motive
  for (i = 0; i < msg->rigid_bodies.size(); i++)
  {
      if (msg->rigid_bodies[i].id == BASE_STREAMING_ID)
      {
        i_base = i;
        //Store the position of the robot base and the orientation
        P_base << msg->rigid_bodies[i].p.x, msg->rigid_bodies[i].p.y, msg->rigid_bodies[i].p.z;
        R_base = this->quatToRotm(msg->rigid_bodies[i].q.x,
                                  msg->rigid_bodies[i].q.y,
                                  msg->rigid_bodies[i].q.z,
                                  msg->rigid_bodies[i].q.w);
        //std::cout << R_base << std::endl;
        break;
      }
  }

  //Now that we have the pose of the robot base, compute the transformation matrix from the Motive frame to the robot base frame
  //T_0_B.block<3,3>(0,0) = this->R_0_B;
  //T_0_B.block<3,1>(0,3) = P_base+this->offset;
  
  // Dovrebbe essere invece così...
  T_0_B.block<3,3>(0,0) = R_base;
  T_0_B.block<3,1>(0,3) = P_base;

  std::cout << T_0_B << std::endl;

  //The rigid body associated to the base was not found
  if(i_base == -1)
  {
    printf("Rigid body of the base not found!\n\n");
    //TODO : decide what to do in this case, we just continue the process
  }

  // Iterate through all the rigid bodies
  for (i = 0; i < msg->rigid_bodies.size(); i++)
  {
      printf("ID : %ld\n", msg->rigid_bodies[i].id);
      // Transform first the position
      P << msg->rigid_bodies[i].p.x, msg->rigid_bodies[i].p.y, msg->rigid_bodies[i].p.z; 
      R = this->quatToRotm(msg->rigid_bodies[i].q.x,
                           msg->rigid_bodies[i].q.y,
                           msg->rigid_bodies[i].q.z,
                           msg->rigid_bodies[i].q.w);
      P_1.segment(0,3) = P;//store in P_1 the current position of the marker
      //Compute the position of the point in the robot base frame
      std::cout << T_0_B.inverse()*P_1 << std::endl;
      //std::cout << T_0_B*P_1 << std::endl;
      //Store the position of the point in the message

      //TODO : Process the orientation...
  }
}

//Save in R the rotation represented by the unit quaternion [qx,qy,qz,qw]
Eigen::Matrix3f WorldToBase::quatToRotm(float qx, float qy, float qz, float qw) const
{
  Matrix3f R;
  R(0,0) = 2*(pow(qw,2)+pow(qx,2))-1;
  R(0,1) = 2*(qx*qy-qw*qz);
  R(0,2) = 2*(qx*qz+qw*qy);
  R(1,0) = 2*(qx*qy+qw*qz);
  R(1,1) = 2*(pow(qw,2)+pow(qy,2))-1;
  R(1,2) = 2*(qy*qz-qw*qx);
  R(2,0) = 2*(qx*qz-qw*qy);
  R(2,1) = 2*(qy*qz+qw*qx);
  R(2,2) = 2*(pow(qw,2)+pow(qz,2))-1;
  return R;
}

// Main method
int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<WorldToBase>());
    rclcpp::shutdown();
    return 0;
}