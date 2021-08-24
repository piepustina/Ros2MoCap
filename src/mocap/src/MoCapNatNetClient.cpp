// This class implements a NatNet client

#include "MoCapNatNetClient.h"
 
// NatNetClient constructor
MoCapNatNetClient::MoCapNatNetClient(int year, int month, int day)
{
    SetDate(year, month, day);
}
 
// Date member function
void MoCapNatNetClient::SetDate(int year, int month, int day)
{
    m_month = month;
    m_day = day;
    m_year = year;
}