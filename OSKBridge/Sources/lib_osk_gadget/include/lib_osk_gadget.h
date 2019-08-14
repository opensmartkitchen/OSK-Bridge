#ifndef lib_osk_gadget_h_
#define lib_osk_gadget_h_

#ifdef __cplusplus
    class OSKGadget {
    public:
        OSKGadget(int me) : me_(me) {}
        float getScaleValue();
        float scaleValue_;
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