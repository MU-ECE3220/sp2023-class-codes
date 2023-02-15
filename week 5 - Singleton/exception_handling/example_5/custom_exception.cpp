#include <iostream>

struct MyCustomException : public std::exception {
    // Overriding the what function from exception class
    const char* what () const throw () {
        return "This is my custom exception\n";
    }
};

int main() {
    try {
        throw MyCustomException();
    } catch(MyCustomException& ex) {
        std::cerr << "Specific catch for MyCustom Exception: "<<ex.what();
    }
    catch(std::exception& ex) {
        std::cerr << "Generalized Exception: "<<ex.what();
    }

    return EXIT_SUCCESS;
}