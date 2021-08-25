#ifndef MOCAPNATNETCLIENT_H
#define MOCAPNATNETCLIENT_H

#include "MessageParser.h" 
#include <string>
#include <iostream>

#include <NatNetTypes.h>
#include <NatNetCAPI.h>
#include <NatNetClient.h>


using namespace std;

// Handler to receive the data from the server
void NATNET_CALLCONV dataFrameHandler(sFrameOfMocapData* data, void* pUserData);

class MoCapNatNetClient:private NatNetClient
{
// Private attributes and methods
private:
    MessageParser* parser;
    sNatNetClientConnectParams g_connectParams;
    sServerDescription g_serverDescription;
    int g_analogSamplesPerMocapFrame = 0;
    
// Public attributes and methods
public:
    // Definition of the construtors
    MoCapNatNetClient();
    ~MoCapNatNetClient();

    // Method to connect the client with the server
    int connect();

    // Method to disconnect the client from the server
    void disconnect();

    // Method to get the data description from the server
    void getDataDescription();

    double SecondsSinceHostTimestamp( uint64_t hostTimestamp );
    
    // Getters
    sServerDescription getServerDescription();
    int getAnalogSamplesPerMocapFrame();

    // Setters
    
};
 
#endif