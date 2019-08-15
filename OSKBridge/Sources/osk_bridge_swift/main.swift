// ///////////////////////////
// FILE: exec_swift/main.swift
// ///////////////////////////
import lib_c
import lib_cpp_cbind
import lib_osk_gadget

print(getCcValue())
print(getCppValueBinding())

print("sizeof_osk_gadget() is \(sizeof_osk_gadget()) ")

/* ************************************
void *oskGadget = alloca(sizeof_osk_gadget());

create_osk_gadget(oskGadget, 20);

if (oskGadget == NULL) {
    return -1;
}

// be aware return early is dangerous do
float weight = 0.0f;
weight = osk_gadget_getScaleValue(oskGadget);
int error = 0;
if (error) {
    goto fail;
}

fail:
destroy_osk_gadget(oskGadget);
************************************** */