#ifndef OSKLOADCELL_HPP
#define OSKLOADCELL_HPP

#include <stdio.h>
#include <string.h>
#include <iostream>

#include "oskdevice.hpp"

class OSKdevice;

class OSKloadcell : public OSKdevice
{
public:
    OSKloadcell(std::string id, int freq);
    ~OSKloadcell();
    static bool run(OSKloadcell *me);
    void start();
private:
    //Serial Communication Variables
    static FILE *m_serPort;
    static char m_readBuffer[1024];
    static int m_numBytesRead;

};

#endif // OSKLOADCELL_HPP
