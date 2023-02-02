#include "static_variable_proto.h"

int main () {

    for(int i=0; i<10; i++) {
        increment();
        dec();
    }
    return 0;
}