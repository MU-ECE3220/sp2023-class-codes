#include <iostream>

/*
 * You can overload functions in C++.
 * Functions can share the same, but they need to 
 * have different arguments/parameters. Return types does't
 * have any effects in function overloading.
 */

int func(int, int);
// void func(int, int); //will not work!
void func();

int main () {

    func();
    func(5,6);
    return EXIT_SUCCESS;
}

int func(int a, int b) {
    return a + b;
}

void func() {
    std::cout << "Hello" << std::endl;
}