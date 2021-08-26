# Message for a RigidBody of the NatNet server
# Unique ID of the RigidBody, assigned by the the server
int64 ID
# true if the rigid body was correctly tracked, false otherwise
bool bTrackingValid
# mean error of the estimate
float64 meanError
# Position of the body
float64 x
float64 y
float64 z
#Orientation of the body as quaternion
float64 qx
float64 qy
float64 qz
float64 qw

