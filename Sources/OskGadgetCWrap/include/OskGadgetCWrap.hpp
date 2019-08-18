#ifndef OSK_GADGET_CWRAP_
#define OSK_GADGET_CWRAP_

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif
    
    // Class Memory Management
    void * oskGadgetCreate();
    void oskGadgetDestroy(void* oskGadget);
    
    // Class Methods()
    float oskGadgetGetScaleWeight(void* oskGadget);

#ifdef __cplusplus
}
#endif

#endif // OSK_GADGET_CWRAP_

