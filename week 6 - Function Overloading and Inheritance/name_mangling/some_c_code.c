#include "some_c_code.h"

/*
 * Do not forget to compile the C code first (you don't need a main)
 * gcc some_c_code.c -f
 */

void func(const char* c) {
    printf("My message is: %s", c);
}

double calculate_triangle_area(double a, double b, double c) {
    double s = (a + b + c)/2.0;
    a = s - a;
    b = s - b;
    c = s - c;
    double result = sqrt(s * a * b * c);
    return result;
}