#include "Rectangle.hpp"
#include "Square.hpp"

int main() {
    Rectangle* rect = nullptr;
    rect = new Rectangle();
    rect->set_height(4.5);
    rect->set_width(10.0);
    
    std::cout << "Rectangle Area: " << rect->calculate_area() << std::endl;
    delete rect;
    Square* square = nullptr;
    try {
        square = new Square(5,5);
        std::cout << "Square Area: " << square->calculate_area() << std::endl;
    } catch(char const* ex) {
        std::cerr << ex << std::endl;
    }
    delete square;
    return EXIT_SUCCESS;
}