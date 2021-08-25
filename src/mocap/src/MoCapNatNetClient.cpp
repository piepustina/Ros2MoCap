// This class implements a NatNet client
#include <cstdio>
#include "MoCapNatNetClient.h"
#include "MessageParser.h"


// Include the configuration file to read all the information
#include <myconfig.h>

using namespace std;
 

// MoCapNatNetClient constructor
MoCapNatNetClient::MoCapNatNetClient()
{
    // Create the connection parameters
    if (SERVER_CONNECTION_TYPE == 0) g_connectParams.connectionType = ConnectionType_Multicast;
    else g_connectParams.connectionType = ConnectionType_Unicast;
    g_connectParams.serverAddress = SERVER_ADDRESS;
    g_connectParams.multicastAddress = MULTI_CAST_ADDRESS;
    g_connectParams.serverDataPort = SERVER_DATA_PORT;
    g_connectParams.serverCommandPort = SERVER_COMMAND_PORT;
    
    // Create an instace of the client
    g_pClient = new NatNetClient();
    // Set the callback for the frames received by the server
    g_pClient->SetFrameReceivedCallback( dataFrameHandler, g_pClient );


    // Create the message parser
    parser = new MessageParser();
}

// Distructor
MoCapNatNetClient::~MoCapNatNetClient()
{
    delete parser;
    delete g_pClient;
}

// Method that starts the connection with the server
int MoCapNatNetClient::connect()
{

    int retCode;
    void* pResult;
    int nBytes = 0;
    ErrorCode ret = ErrorCode_OK;
    
    // Release previous server
    g_pClient->Disconnect();

    // Print version info
    unsigned char ver[4];
    NatNet_GetVersion(ver);
    printf("NatNet Sample Client (NatNet ver. %d.%d.%d.%d)\n", ver[0], ver[1], ver[2], ver[3]);

    // Connect the client to the server
    retCode = g_pClient->Connect( g_connectParams );

    // Print server info
    memset( &g_serverDescription, 0, sizeof( g_serverDescription ) );
    
    ret = g_pClient->GetServerDescription( &g_serverDescription );
    if ( ret != ErrorCode_OK || ! g_serverDescription.HostPresent )
    {
        printf("Unable to connect to server. Host not present. Exiting.");
        return 1;
    }
    printf("[SampleClient] Server application info:\n");

    printf("Application: %s (ver. %d.%d.%d.%d)\n", g_serverDescription.szHostApp, g_serverDescription.HostAppVersion[0],
            g_serverDescription.HostAppVersion[1],g_serverDescription.HostAppVersion[2],
            g_serverDescription.HostAppVersion[3]);

    printf("NatNet Version: %d.%d.%d.%d\n", g_serverDescription.NatNetVersion[0], g_serverDescription.NatNetVersion[1],
            g_serverDescription.NatNetVersion[2], g_serverDescription.NatNetVersion[3]);

    printf( "Server IP:%s\n", g_connectParams.serverAddress );
    printf("Server Name:%s\n\n", g_serverDescription.szHostComputerName);

    // Get mocap frame rate
    ret = g_pClient->SendMessageAndWait("FrameRate", &pResult, &nBytes);
    if (ret == ErrorCode_OK)
    {
        float fRate = *((float*)pResult);
        printf("Mocap Framerate : %3.2f\n", fRate);
    }
    else
        printf("Error getting frame rate.\n");

    // Get # of analog samples per mocap frame of data
    ret = g_pClient->SendMessageAndWait("AnalogSamplesPerMocapFrame", &pResult, &nBytes);
    if (ret == ErrorCode_OK)
        {
            int g_analogSamplesPerMocapFrame = *((int*)pResult);
            printf("Analog Samples Per Mocap Frame : %d\n", g_analogSamplesPerMocapFrame);
        }
        else
            printf("Error getting Analog frame rate.\n");
    
    //getDataDescription();
    // Return the code
    return retCode;
}

/*Disconnect the client*/
void MoCapNatNetClient::disconnect()
{
    // Disconnect the client
    g_pClient->Disconnect();
}


// Callback for the data frames stremed by the server
void NATNET_CALLCONV dataFrameHandler(sFrameOfMocapData* data, void* pUserData)
{
    printf("Ricevuto frame....");
}

/*Method that gets the data description from the server*/
void MoCapNatNetClient::getDataDescription()
{
    void* response;
	int retCode;
    int nBytes = 0;
    ErrorCode ret = ErrorCode_OK;
    int iResult;

    printf("Sending test request...\n\n");

    ret = g_pClient->SendMessageAndWait("TestRequest", &response, &nBytes);
	if (ret == ErrorCode_OK)
	{
		printf("[SampleClient] Received: %s\n", (char*)response);
	}

    printf("\n\n[SampleClient] Requesting Data Descriptions...\n");
	sDataDescriptions* pDataDefs = NULL;
	iResult = g_pClient->GetDataDescriptionList(&pDataDefs);
	if (iResult != ErrorCode_OK || pDataDefs == NULL)
	{
		printf("[SampleClient] Unable to retrieve Data Descriptions.\n");
	}
	else
	{
        // Process the data description
        printf("[SampleClient] Received %d Data Descriptions:\n", pDataDefs->nDataDescriptions );
        for(int i=0; i < pDataDefs->nDataDescriptions; i++)
        {
            printf("Data Description # %d (type=%d)\n", i, pDataDefs->arrDataDescriptions[i].type);
            if(pDataDefs->arrDataDescriptions[i].type == Descriptor_MarkerSet)
            {
                // MarkerSet
                sMarkerSetDescription* pMS = pDataDefs->arrDataDescriptions[i].Data.MarkerSetDescription;
                printf("MarkerSet Name : %s\n", pMS->szName);
                for(int i=0; i < pMS->nMarkers; i++)
                    printf("%s\n", pMS->szMarkerNames[i]);

            }
            else if(pDataDefs->arrDataDescriptions[i].type == Descriptor_RigidBody)
            {
                // RigidBodyFi
                sRigidBodyDescription* pRB = pDataDefs->arrDataDescriptions[i].Data.RigidBodyDescription;
                printf("RigidBody Name : %s\n", pRB->szName);
                printf("RigidBody ID : %d\n", pRB->ID);
                printf("RigidBody Parent ID : %d\n", pRB->parentID);
                printf("Parent Offset : %3.2f,%3.2f,%3.2f\n", pRB->offsetx, pRB->offsety, pRB->offsetz);

                if ( pRB->MarkerPositions != NULL && pRB->MarkerRequiredLabels != NULL )
                {
                    for ( int markerIdx = 0; markerIdx < pRB->nMarkers; ++markerIdx )
                    {
                        const MarkerData& markerPosition = pRB->MarkerPositions[markerIdx];
                        const int markerRequiredLabel = pRB->MarkerRequiredLabels[markerIdx];

                        printf( "\tMarker #%d:\n", markerIdx );
                        printf( "\t\tPosition: %.2f, %.2f, %.2f\n", markerPosition[0], markerPosition[1], markerPosition[2] );

                        if ( markerRequiredLabel != 0 )
                        {
                            printf( "\t\tRequired active label: %d\n", markerRequiredLabel );
                        }
                    }
                }
            }
            else if(pDataDefs->arrDataDescriptions[i].type == Descriptor_Skeleton)
            {
                // Skeleton
                sSkeletonDescription* pSK = pDataDefs->arrDataDescriptions[i].Data.SkeletonDescription;
                printf("Skeleton Name : %s\n", pSK->szName);
                printf("Skeleton ID : %d\n", pSK->skeletonID);
                printf("RigidBody (Bone) Count : %d\n", pSK->nRigidBodies);
                for(int j=0; j < pSK->nRigidBodies; j++)
                {
                    sRigidBodyDescription* pRB = &pSK->RigidBodies[j];
                    printf("  RigidBody Name : %s\n", pRB->szName);
                    printf("  RigidBody ID : %d\n", pRB->ID);
                    printf("  RigidBody Parent ID : %d\n", pRB->parentID);
                    printf("  Parent Offset : %3.2f,%3.2f,%3.2f\n", pRB->offsetx, pRB->offsety, pRB->offsetz);
                }
            }
            else if(pDataDefs->arrDataDescriptions[i].type == Descriptor_ForcePlate)
            {
                // Force Plate
                sForcePlateDescription* pFP = pDataDefs->arrDataDescriptions[i].Data.ForcePlateDescription;
                printf("Force Plate ID : %d\n", pFP->ID);
                printf("Force Plate Serial : %s\n", pFP->strSerialNo);
                printf("Force Plate Width : %3.2f\n", pFP->fWidth);
                printf("Force Plate Length : %3.2f\n", pFP->fLength);
                printf("Force Plate Electrical Center Offset (%3.3f, %3.3f, %3.3f)\n", pFP->fOriginX,pFP->fOriginY, pFP->fOriginZ);
                for(int iCorner=0; iCorner<4; iCorner++)
                    printf("Force Plate Corner %d : (%3.4f, %3.4f, %3.4f)\n", iCorner, pFP->fCorners[iCorner][0],pFP->fCorners[iCorner][1],pFP->fCorners[iCorner][2]);
                printf("Force Plate Type : %d\n", pFP->iPlateType);
                printf("Force Plate Data Type : %d\n", pFP->iChannelDataType);
                printf("Force Plate Channel Count : %d\n", pFP->nChannels);
                for(int iChannel=0; iChannel<pFP->nChannels; iChannel++)
                    printf("\tChannel %d : %s\n", iChannel, pFP->szChannelNames[iChannel]);
            }
            else if (pDataDefs->arrDataDescriptions[i].type == Descriptor_Device)
            {
                // Peripheral Device
                sDeviceDescription* pDevice = pDataDefs->arrDataDescriptions[i].Data.DeviceDescription;
                printf("Device Name : %s\n", pDevice->strName);
                printf("Device Serial : %s\n", pDevice->strSerialNo);
                printf("Device ID : %d\n", pDevice->ID);
                printf("Device Channel Count : %d\n", pDevice->nChannels);
                for (int iChannel = 0; iChannel < pDevice->nChannels; iChannel++)
                    printf("\tChannel %d : %s\n", iChannel, pDevice->szChannelNames[iChannel]);
            }
            else if (pDataDefs->arrDataDescriptions[i].type == Descriptor_Camera)
            {
                // Camera
                sCameraDescription* pCamera = pDataDefs->arrDataDescriptions[i].Data.CameraDescription;
                printf("Camera Name : %s\n", pCamera->strName);
                printf("Camera Position (%3.2f, %3.2f, %3.2f)\n", pCamera->x, pCamera->y, pCamera->z);
                printf("Camera Orientation (%3.2f, %3.2f, %3.2f, %3.2f)\n", pCamera->qx, pCamera->qy, pCamera->qz, pCamera->qw);
            }
            else
            {
                printf("Unknown data type.\n");
                // Unknown
            }
        }
    }
}

 
