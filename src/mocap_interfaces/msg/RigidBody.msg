# Message for a RigidBody of the NatNet server
# Unique ID of the RigidBody, assigned by the the server
int64 id
# true if the rigid body was correctly tracked, false otherwise
bool valid
# mean error of the estimate
float64 mean_error
# Position of the body
float64 x
float64 y
float64 z
#Orientation of the body as quaternion
float64 qx
float64 qy
float64 qz
float64 qw

