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

class MoCapNatNetClient
{
// Private attributes and methods
private:
    MessageParser* parser;
    NatNetClient* g_pClient = NULL;
    sNatNetClientConnectParams g_connectParams;
    sServerDescription g_serverDescription;
    
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
    
    // Getters

    // Setters
    
};
 
#endif