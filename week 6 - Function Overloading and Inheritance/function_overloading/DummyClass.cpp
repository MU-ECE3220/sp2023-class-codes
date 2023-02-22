#include "DummyClass.hpp"

int DummyClass::func(int a, int b) {
    return a + b;
}

void DummyClass::func() {
    std::cout << "Hello" << std::endl;
}

DummyClass::DummyClass() {}