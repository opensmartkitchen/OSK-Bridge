#ifndef OSKGADGET_HPP
#define OSKGADGET_HPP

#include <string>
#include <vector>

#include "oskdevice.hpp"
#include "oskloadcell.hpp"
#include "oskcam.hpp"

class OSKdevice;
class OSKloadcell;
class OSKcam;

class OSKgadget
{
public:
    OSKgadget();
    OSKgadget(std::string id, std::string logDirPath);
    bool init();
    void run();
    long getScaleLastTimestamp();
    
private:
    std::string m_logDirPath;
    std::string m_id;
    std::vector<OSKdevice*> m_device;
    OSKloadcell* m_loadCell = NULL;
    OSKcam* m_cam = NULL;
};

#endif // OSKGADGET_HPP
