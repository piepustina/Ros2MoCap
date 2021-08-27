#ifndef MOCAPPUBLISHER_H
#define MOCAPPUBLISHER_H

#include <vector>
#include <NatNetTypes.h>

#include "rclcpp/rclcpp.hpp"
#include "mocap_interfaces/msg/rigid_body_array.hpp"


using namespace std;
class MoCapPublisher: public rclcpp::Node
{
// Private attributes and methods
private:
    rclcpp::Publisher<mocap_interfaces::msg::RigidBodyArray>::SharedPtr publisher_;

// Public attributes and methods
public:
    // Definition of the construtors
    MoCapPublisher();

    // Send methods
    void sendRigidBodyMessage(sRigidBodyData* bodies, int nRigidBodies);
 
    // Getters
    
    // Setters
    
};
 
#endif