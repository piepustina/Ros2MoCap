#include<WorldToBase.h>
#include <stdio.h>

WorldToBase::WorldToBase(): Node("mo_cap_subscriber")
{
  this->subscription_ = this->create_subscription<mocap_interfaces::msg::RigidBodyArray>(
    "rigid_body_topic", 10, std::bind(&WorldToBase::rigid_body_topic_callback, this, _1));
}

void WorldToBase::rigid_body_topic_callback(const mocap_interfaces::msg::RigidBodyArray::SharedPtr msg) const
{
  //RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());
  printf("Ho ricevuto un messaggio!\n\n");
  for (int i = 0; i < msg->rigid_bodies.size(); i++)
  {
      printf("ID : %ld\n", msg->rigid_bodies[i].id);
  }
}


// Main method
int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<WorldToBase>());
    rclcpp::shutdown();
    return 0;
}