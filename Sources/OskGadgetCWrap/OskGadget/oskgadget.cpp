#include "oskgadget.hpp"

OSKgadget::OSKgadget() 
{
    scaleWeigth = 2.2f; // :TODO:!!!: temporary test value of 2.2 pounds.
}

OSKgadget::~OSKgadget() {
    // nothing to shutdown yet.
}

// getScaleWeight
float OSKgadget::getScaleWeight() {
    if (scaleWeigth > 1.0f) {
       scaleWeigth = 0;
    }
    else {
       scaleWeigth = 2.2f; 
    }

    return scaleWeigth;
}

// getScaleImage

// getScaleItems 

