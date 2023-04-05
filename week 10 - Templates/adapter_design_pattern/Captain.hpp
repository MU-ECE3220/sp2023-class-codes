#ifndef CAPTAIN_HPP
#define CAPTAIN_HPP
#include "RowingBoat.hpp"

class Captain {
    private:
        RowingBoat* _rowing_boat;
    public:
        void row();
        Captain(RowingBoat* rowing_boat);
        ~Captain();
};

#endif