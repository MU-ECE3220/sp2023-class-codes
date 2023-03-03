#include "Coin.hpp"

class SilverCoin : public Coin {
    public:
        std::string get_description();
    private:
        static std::string _description;
};