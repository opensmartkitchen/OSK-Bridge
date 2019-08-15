#ifndef lib_osk_gadget_h_
#define lib_osk_gadget_h_

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus

    class OSKGadget {
    public:
        OSKGadget(float initialWeight) : scaleValue_(initialWeight) {}
        float getScaleValue();
        
        float scaleValue_;
        float scaleCalibration_;
    };

extern "C" {
#endif

size_t sizeof_osk_gadget();
void *create_osk_gadget(void* self, int arg);
void osk_gadget_getScaleValue(void* self);
void destroy_osk_gadget(void* self);

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // lib_osk_gadget_h_

