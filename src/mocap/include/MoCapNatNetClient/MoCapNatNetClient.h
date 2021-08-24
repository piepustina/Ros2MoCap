#ifndef MOCAPNATNETCLIENT_H
#define MOCAPNATNETCLIENT_H

#include "MessageParser.h" 

class MoCapNatNetClient
{
// Private attributes and methods
private:
    int m_year;
    int m_month;
    int m_day;
    MessageParser* parser;

// Public attributes and methods
public:
    // Definition of the construtors
    MoCapNatNetClient(int year, int month, int day);
    ~MoCapNatNetClient();
 
    // Getters
    void SetDate(int year, int month, int day);
 
    // Setters
    int getYear() { return m_year; }
    int getMonth() { return m_month; }
    int getDay()  { return m_day; }
};
 
#endif