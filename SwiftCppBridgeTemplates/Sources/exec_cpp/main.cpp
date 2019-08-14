/////////////////////////////
// FILE: exec_cpp/main.cpp //
/////////////////////////////
#include <iostream>
#include "lib_cpp.hpp"

// apply namespace to C library
namespace ns_lib_c {
    // tell C++ compiler that C headers are being provided
    extern "C" {
        #include "lib_c.h" 
    }
}

int main() {
    std::cout << "exec_cpp: " << lib_cpp::getCppValue() << std::endl;
    std::cout << "          " << ns_lib_c::getCcValue() << std::endl;
    return 0;
}
