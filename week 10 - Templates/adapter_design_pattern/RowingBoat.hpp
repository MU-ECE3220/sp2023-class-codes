#ifndef ROWINGBOAT_HPP
#define ROWINGBOAT_HPP
#include <iostream>

class RowingBoat {
    public:
        virtual void row() {
            std::cout << "row row row your boat gently down the stream." << std::endl;
        }
        virtual ~RowingBoat(){};
};

#endif