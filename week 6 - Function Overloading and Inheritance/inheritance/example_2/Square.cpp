#include "Square.hpp"

Square::Square() {
    std::cout << "Square object created!" << std::endl;
}

Square::Square(double w, double h) {
    if (w != h) {
        throw "This is not a Square!\n";
    }
    _width = w;
    _height = h;
    std::cout << "Square object created!" << std::endl;
}

Square::~Square() {
    std::cout << "Square object destroyed!" << std::endl;
}