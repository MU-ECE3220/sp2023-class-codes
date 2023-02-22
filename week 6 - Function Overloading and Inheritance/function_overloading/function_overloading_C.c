#include <stdio.h>
/*
 * NOTE: You cannot overload functions in C 
 */
// int func(int, int);
void func();

int main () {
    func(5,6);
    return 0;
}

// int func(int a, int b) {
//     return a + b;
// }

void func() {
    printf("Hello\n");
}