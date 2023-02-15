#include <iostream>

double division(double a, double b) {
    if(b==0) {
        throw "Division by zero\n";
    }
    return (a/b);
}

int main() {

    try {
        double result = division(5.8, 0.0);
        std::cout << "Result: " << result << std::endl;
    } catch(const char* ex_msg){
        std::cerr << ex_msg << std::endl;
    }
    return EXIT_SUCCESS;
}
