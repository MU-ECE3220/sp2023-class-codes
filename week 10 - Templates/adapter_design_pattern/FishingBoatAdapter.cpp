#include "FishingBoatAdapter.hpp"

void FishingBoatAdapter::row() {
    _boat->sail();
}

FishingBoatAdapter::FishingBoatAdapter() {
    _boat = new FishingBoat();
}

FishingBoatAdapter::~FishingBoatAdapter() {
    delete _boat;
}