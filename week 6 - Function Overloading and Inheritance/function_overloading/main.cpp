#include "DummyClass.hpp"

int main() {
    DummyClass* dc = new DummyClass();
    dc->func();
    dc->func(5,6);
    return EXIT_SUCCESS;
}