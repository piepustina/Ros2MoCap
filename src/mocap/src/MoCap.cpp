// RoS2 Node that handles the connection with the NatNet server (Motive)
#include <MoCap.h>

// Include the configuration file
#include <myconfig.h>

// Include standard libraries
#include <cstdio>

// To move to the client
#include <NatNetTypes.h>
#include <NatNetCAPI.h>
#include <NatNetClient.h>

// Include the MoCap NatNet client
#include <MoCapNatNetClient.h>

using namespace std;

// Main
int main(int argc, char ** argv)
{
  (void) argc;
  (void) argv;

  unsigned char ver[4];
  NatNet_GetVersion( ver );
  printf( "NatNet Sample Client (NatNet ver. %d.%d.%d.%d)\n", ver[0], ver[1], ver[2], ver[3] );

  //Prova creazione MoCapNatNetClient
  MoCapNatNetClient* c = new MoCapNatNetClient(1, 100, 1000);

  printf("Giorno %d\n", c->getDay());

  printf("Prova %s", SERVER_ADDRESS);

  printf("Distruggo il NatNet client...");
  delete c;
  printf("Prova nodo...\n");
  return 0;
}
