#include <iostream>
#include <fstream>

void foo(const std::string& x) {
    std::ifstream file;
    file.open(x);
    if(!file) {
        //throw "This file does not exist\n";
        throw std::runtime_error("This file does not exist\n");
    }
}

void bar(const std::string& x) {
    foo(x);
}

int main() {
    try {
        bar("test.txt");
    } catch (std::exception& ex) {
        std::cerr << "Source of exception: " << ex.what() << std::endl;
    }
    
    return EXIT_SUCCESS;
}