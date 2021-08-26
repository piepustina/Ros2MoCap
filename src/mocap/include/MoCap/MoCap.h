#ifndef MOCAP_H
#define MOCAP_H

#include <vector>
#include <NatNetTypes.h>

using namespace std;
class MoCap
{
// Private attributes and methods
private:

// Public attributes and methods
public:
    // Definition of the construtors
    MoCap();

    // Send methods
    void sendRigidBodyMessage(sRigidBodyData* bodies, int nRigidBodies);
 
    // Getters
    
    // Setters
    
};
 
#endif