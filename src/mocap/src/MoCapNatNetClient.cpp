// This class implements a NatNet client
#include <cstdio>
#include "MoCapNatNetClient.h"
#include "MessageParser.h"
 
// MoCapNatNetClient constructor
MoCapNatNetClient::MoCapNatNetClient(int year, int month, int day)
{
    SetDate(year, month, day);

    // Build the message parser
    this->parser = new MessageParser();

    printf("Builded message parser...");
}

// Distructor
MoCapNatNetClient::~MoCapNatNetClient()
{
    delete parser;
}

 
// Date member function
void MoCapNatNetClient::SetDate(int year, int month, int day)
{
    m_month = month;
    m_day = day;
    m_year = year;
}