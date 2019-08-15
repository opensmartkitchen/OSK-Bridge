#include "MBR.hpp"

using namespace std;
const void * initialize(char *filename)
{
    MBR *mbr = new MBR(filename);

    return (void *)mbr;
}

const char *hexdump(const void *object)
{
    MBR *mbr;
    static char retval[2048];

    mbr = (MBR *)object;
    strcpy(retval, mbr -> hexdump());
    return retval;
}

const char *imageType(const void *object)
{
    MBR *mbr;
    static char retval[256];

    mbr = (MBR *)object;
    strcpy(retval, mbr -> imageType());
    return retval;
}
