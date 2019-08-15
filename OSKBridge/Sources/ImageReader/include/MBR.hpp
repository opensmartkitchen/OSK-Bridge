#include <stddef.h>
#include <stdint.h>
#include <iostream>

class MBR {
    std::string filename;

public:
    MBR (std::string filename);
    const char *hexdump();
    const char *imageType();
    const char *bootCode();
    const char *partitions();
private:
    bool readFile(unsigned char *buffer, const unsigned int length);
};
