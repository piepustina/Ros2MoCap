// RoS2 Node that handles the connection with the NatNet server (Motive)
#include <MoCap.h>

// Include standard libraries
#include <stdio.h>
#include <unistd.h>


// Include the MoCap NatNet client
#include <MoCapNatNetClient.h>

using namespace std;

// Main
int main(int argc, char ** argv)
{
  (void) argc;
  (void) argv;

  //Create the MoCapNatNetClient
  MoCapNatNetClient* c = new MoCapNatNetClient();

  // Try to connect the client 
  int retCode = c->connect();
  printf("Return code is : %d", retCode);

  // Get the data description from the server
  c->getDataDescription();

  // Disconnect the client
  //c->disconnect();
  
  //printf("Distruggo il NatNet client...\n\n");
  //delete c;

  // Ready to receive marker stream!
	printf("\nClient is connected to server and listening for data...\n");
	bool bExit = false;
  char choice;
	while ( !bExit )
	{
    scanf(" %c", &choice);
		if (choice == 'q') bExit = true;
  }

  return 0;
}
