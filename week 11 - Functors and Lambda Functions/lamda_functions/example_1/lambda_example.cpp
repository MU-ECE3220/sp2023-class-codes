#include<iostream>

int main() {

    auto hello = []() {
        std::cout << "Hey there!" << std::endl;
    };

    /** equal to **/
    /*
    void hello() {
        std::cout << "Hey there!" << std::endl;
    }
    */

    hello();

    auto add = [](int a, int b) {
        return a + b;
    };

    std::cout << add(5,6) << std::endl;

    int count = 0;
    auto inc = [&count]() {
        count = count+1;
        return count;
    };

    std::cout << inc() << std::endl;
    std::cout << count << std::endl;

    return EXIT_SUCCESS;
}