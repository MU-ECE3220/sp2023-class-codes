#include "function_pointer.h"
#include "math_functions.h"

int main () {

    void (*f_ptr)() = function_pointer_1;
    f_ptr();

    float (*m_func[4])(float,float) = {add, sub, div, mul};

    int selection = 1;
    while(selection >= 0) {
        scanf("%d", &selection);
        if (selection >= 0 && selection <= 3){
            printf("Value: %f\n", m_func[selection](2.0, 5.0));
        }
        else {
            fprintf(stderr, "Bad input\n");
        }
    }

    return 0;
}
