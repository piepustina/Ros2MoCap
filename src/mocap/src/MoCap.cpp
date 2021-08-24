// RoS2 Node that handles the connection with the NatNet server (Motive)
#include <cstdio>

#include <NatNetTypes.h>
#include <NatNetCAPI.h>
#include <NatNetClient.h>

int main(int argc, char ** argv)
{
  (void) argc;
  (void) argv;

  unsigned char ver[4];
  NatNet_GetVersion( ver );
  printf( "NatNet Sample Client (NatNet ver. %d.%d.%d.%d)\n", ver[0], ver[1], ver[2], ver[3] );

  printf("Prova nodo...\n");
  return 0;
}
