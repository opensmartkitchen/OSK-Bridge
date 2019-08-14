#include "include/lib_osk_gadget.h" 
// include vs. import

void OSKGadget::getScaleValue() {
    return scaleValue_;
}

extern "C" {
    size_t sizeof_osk_gadget() {
        return sizeof(OSKGadget);
    }

    void* create_osk_gadget(void* self, int arg) {
        OSKGadget* ptr = new(self) OSKGadget(arg);
        return ptr;
    }

    void osk_gadget_magic(void* self) {
        OSKGadget *og = reinterpret_cast<OSKGadget *>(self);
        og->magic();
    }

    void destroy_osk_gadget(void* self) {
        OSKGadget *og = reinterpret_cast<OSKGadget *>(self);
        og->~OSKGadget();
    }
}



