// //////////////////////////////
// FILE: OskBridgeMain/main.swift
// //////////////////////////////
import OskGadgetCWrap

guard var oskGadget = oskGadgetCreate() else {
    fatalError()
}

print(oskGadgetGetScaleWeight(oskGadget))
