// ///////////////////////////
// FILE: exec_swift/main.swift
// ///////////////////////////
import lib_c
import lib_cpp_cbind
import OskGadgetCWrap

print(getCcValue())
print(getCppValueBinding())

guard var oskGadget = oskGadgetCreate() else {
    fatalError()
}

print(oskGadgetGetScaleWeight(oskGadget))
