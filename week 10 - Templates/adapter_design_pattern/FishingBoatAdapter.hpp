#ifndef FISHINGBOATADAPTER_HPP
#define FISHINGBOATADAPTER_HPP
#include "RowingBoat.hpp"
#include "FishingBoat.hpp"

class FishingBoatAdapter : public RowingBoat {

    private:
        FishingBoat* _boat;
    public:
        FishingBoatAdapter();
        ~FishingBoatAdapter();
        void row();

};

#endif