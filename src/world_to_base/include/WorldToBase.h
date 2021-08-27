#ifndef WORLDTOBASE_H
#define WORLDTOBASE_H


#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "mocap_interfaces/msg/rigid_body_array.hpp"

using std::placeholders::_1;
using namespace std;

class WorldToBase: public rclcpp::Node
{
// Private attributes and methods
private:
    void rigid_body_topic_callback(const mocap_interfaces::msg::RigidBodyArray::SharedPtr msg) const;
    rclcpp::Subscription<mocap_interfaces::msg::RigidBodyArray>::SharedPtr subscription_;
    
// Public attributes and methods
public:
    // Definition of the construtors
    WorldToBase();

    // Getters
    
    // Setters
    
};
 
#endif
