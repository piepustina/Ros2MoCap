#ifndef WORLDTOBASE_H
#define WORLDTOBASE_H


#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "mocap_interfaces/msg/rigid_body_array.hpp"
#include <Eigen/Dense>

using std::placeholders::_1;
using namespace std;

class WorldToBase: public rclcpp::Node
{
// Private attributes and methods
private:
    void rigid_body_topic_callback(const mocap_interfaces::msg::RigidBodyArray::SharedPtr msg) const;
    rclcpp::Subscription<mocap_interfaces::msg::RigidBodyArray>::SharedPtr subscription_;
    void transformPose(const mocap_interfaces::msg::RigidBodyArray::SharedPtr msg) const;
    Eigen::Matrix3f quatToRotm(float qx, float qy, float qz, float qw) const;//transform a unit quaternion representation into a rotation matrix and save it in R
    
    Eigen::Matrix3f R_0_B;
    Eigen::Vector3f offset;

// Public attributes and methods
public:
    // Definition of the construtors
    WorldToBase();

    // Getters
    
    // Setters
    
};
 
#endif
