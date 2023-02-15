#include <iostream>

int fun() {
    //throw 5;
    //throw 'x';
    int x;
    std::cin >> x;
    if (x < 0) {
        throw x;
    }
    return x;
}


int main() {

    try {
        std::cout << "Inside try block\n";
        fun();
        std::cout << "After throw statement\n";
    }catch(int ex) {
        std::cout << "Integer Exception caught, Value is:" << ex << std::endl;
    }catch(char ex) {
        std::cout << "Character Exception caught, Value is:" << ex << std::endl;
    }catch(...) {
        std::cout << "Exception caught, defintely not an int or char, this too much!\n";
    }

    std::cout << "After try-catch block\n";

    return EXIT_SUCCESS;
}