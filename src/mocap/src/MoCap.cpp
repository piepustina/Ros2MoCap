// RoS2 Node that handles the connection with the NatNet server (Motive)
#include <MoCap.h>

// Include standard libraries
#include <stdio.h>
#include <unistd.h>


// Include the MoCap NatNet client
#include <MoCapNatNetClient.h>

using namespace std;


MoCap::MoCap()
{

}

// Method that send over the ROS network the data of a rigid body
void MoCap::sendRigidBodyMessage(sRigidBodyData* bodies, int nRigidBodies)
{
  printf("Sending message containing %d Rigid Bodies.\n\n", nRigidBodies);
  // Loop over all the rigid bodies
  for(int i=0; i < nRigidBodies; i++)
  {
    printf("Rigid Body [ID=%d  Error=%3.2f  Valid=%d]\n", bodies[i].ID, bodies[i].MeanError, bodies[i].params & 0x01);
    printf("\tx\ty\tz\tqx\tqy\tqz\tqw\n");
    printf("\t%3.2f\t%3.2f\t%3.2f\t%3.2f\t%3.2f\t%3.2f\t%3.2f\n",
      bodies[i].x,
      bodies[i].y,
      bodies[i].z,
      bodies[i].qx,
      bodies[i].qy,
      bodies[i].qz,
      bodies[i].qw);
  }
}


// Main
int main(int argc, char ** argv)
{
  (void) argc;
  (void) argv;

  //Create the ROS2 Publisher
  MoCap* publisher = new MoCap();

  //Create the MoCapNatNetClient
  MoCapNatNetClient* c = new MoCapNatNetClient(publisher);

  // Try to connect the client 
  int retCode = c->connect();
  printf("Return code is : %d", retCode);

  // Disconnect the client
  //c->disconnect();
  
  //printf("Distruggo il NatNet client...\n\n");

  // Ready to receive marker stream!
	printf("\nClient is connected to server and listening for data...\n");
	bool bExit = false;
  char choice;
	while ( !bExit )
	{
    scanf(" %c", &choice);
		if (choice == 'q') bExit = true;
  }

  // Delete all the objects created
  delete c;
  delete publisher;

  return 0;
}
