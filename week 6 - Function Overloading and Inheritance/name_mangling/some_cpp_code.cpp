#include <iostream>

/*
 * Compile the C++ code by including the precompiled C code.
 * g++ -std=c++11 some_cpp_code.cpp some_c_code.o -o main
 */

extern "C" {
    #include "some_c_code.h"
    int printf(const char* format, ...);
}

int main () {
    printf("Testing\n");
    func("Testing\n");
    std::cout << calculate_triangle_area(3,4,5) << std::endl;
    return 0;
}