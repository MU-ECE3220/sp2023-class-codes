#include "Rectangle.hpp"

double Rectangle::calculate_area(double w, double h) {
    return w * h;
}

double Rectangle::calculate_area() {
    return _width * _height;
}

void Rectangle::set_width(double w) {
    _width = w;
}
void Rectangle::set_height(double h) {
    _height = h;
}
double Rectangle::get_width() {
    return _width;
}
double Rectangle::get_height() {
    return _height;
}

Rectangle::Rectangle() {

}

Rectangle::~Rectangle() {}
