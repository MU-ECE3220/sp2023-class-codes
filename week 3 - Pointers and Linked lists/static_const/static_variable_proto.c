#include "static_variable_proto.h"

void increment() {
    static int x = 0;
    x++;
    printf("X: %d\n", x);
}

void dec() {
    decrement();
}

static void decrement() {
    int y = 0;
    y--;
    printf("X: %d\n", y);
}