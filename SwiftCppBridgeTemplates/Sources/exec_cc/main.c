// ///////////////////////
// FILE: exec_cc/main.c //
// ///////////////////////
//
//  Created by marc on 2019.06.01.
//

#include <stdio.h>

#include "lib_c.h"
#include "lib_cpp_cbind.h"

int main() {
    printf("exec_cc: %d\n",  getCcValue());
    return 0;
}
