#include "Kitten.hpp"

void Kitten::make_sound () {
    std::cout << "Meow" << std::endl;
}

Kitten::~Kitten() {
    std::cout<< "Kitten destroyed" << std::endl;
}