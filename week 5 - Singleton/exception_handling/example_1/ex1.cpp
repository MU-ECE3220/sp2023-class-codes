#include <iostream>

int main() {

    int x = -1;
    try {
        std::cout << "Inside try block\n";
        throw x;
        std::cout << "After throw statement\n";
    }catch(int ex) {
        std::cout << "Exception caught, x=" << ex << std::endl;
    }

    std::cout << "After try-catch block\n";

    return EXIT_SUCCESS;
}