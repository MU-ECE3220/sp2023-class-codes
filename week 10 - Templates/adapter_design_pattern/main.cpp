#include "Captain.hpp"
#include "RowingBoat.hpp"
#include "FishingBoatAdapter.hpp"

int main() {

    Captain* cap = new Captain(new FishingBoatAdapter());
    cap->row();
    delete cap;
    return EXIT_SUCCESS;
}