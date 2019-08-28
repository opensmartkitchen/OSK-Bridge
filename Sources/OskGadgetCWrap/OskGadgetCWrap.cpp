#include "include/OskGadgetCWrap.hpp" 
#include "../OskGadget/oskgadget.hpp"

#include <iostream>
#include <new>

extern "C" {

    // Class Memory Management
    void * oskGadgetCreate() {
        OSKgadget* oskGadget = new OSKgadget();
        return (void *)oskGadget;
    }

    void oskGadgetDestroy(void* oskGadget) {
        //OSKgadget *ptr = static_cast<OSKgadget *>(oskGadget);
        OSKgadget *ptr = (OSKgadget *)oskGadget;
        ptr->~OSKgadget();
    }

    bool oskGadgetInit(void* oskGadget) {
        OSKgadget* ptr = (OSKgadget *)oskGadget;
        return ptr->init();
    }
    void oskGadgetRun(void* oskGadget) {
        OSKgadget* ptr = (OSKgadget *)oskGadget;
        ptr->run();
    }

    // //Class Methods()
    //float oskGadgetGetScaleWeight(void* oskGadget) {
    //    //OSKgadget* ptr = static_cast<OSKgadget *>(oskGadget);
    //    OSKgadget* ptr = (OSKgadget *)oskGadget;
    //    return ptr->getScaleWeight();
    //}
    
    long oskGadgetGetLastTimestamp(void* oskGadget) {
        //OSKgadget* ptr = static_cast<OSKgadget *>(oskGadget);
        OSKgadget* ptr = (OSKgadget *)oskGadget;
        return ptr->getScaleLastTimestamp();
    }
    
};



