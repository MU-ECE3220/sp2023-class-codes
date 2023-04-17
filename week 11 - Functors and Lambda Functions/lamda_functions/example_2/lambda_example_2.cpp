#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

struct print {
    void operator()(int elem) {
        std::cout << elem * 10 << std::endl;
    }
};

int main() {

    // example #1
    std::vector<int> v = {1,2,3,4,5};
    std::for_each(v.begin(), v.end(), print());

    // example #2
    std::function<int(int, int)> func = [](int x, int y) {
        return x + y;
    };

    std::cout << func(4,5) << std::endl;

    // example #3
    int a = 5;
    int b = 2;
    
    std::function<int(void)> func2 = [&a, b]() {
        a = a * a;
        return a + b;
    };

    std::cout << "Before Value of a:" << a << std::endl;
    std::cout << func2() << std::endl;
    std::cout << "After Value of a:" << a << std::endl;

    // example #4
    auto operation = [] (int a, int b, std::string operation_type) -> double {
        if(operation_type.compare("+")) {
            return a + b;
        }
        else if(operation_type.compare("/2")) {
            return (a + b) / 2.0;
        }
    };

    std::cout << operation(2,3,"/2") << std::endl;

    return EXIT_SUCCESS;
}