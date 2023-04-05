#include "Captain.hpp"

void Captain::row() {
    _rowing_boat->row();
}
Captain::Captain(RowingBoat* rowing_boat) {
    _rowing_boat = rowing_boat;
}

Captain::~Captain() {
    delete _rowing_boat;
}