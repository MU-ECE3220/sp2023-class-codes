#include <iostream>
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {

    protected:
        double _width;
        double _height;
    public:
        Rectangle();
        ~Rectangle();
        double calculate_area(double,double);
        double calculate_area();
        void set_width(double);
        void set_height(double);
        double get_width();
        double get_height();
};

#endif