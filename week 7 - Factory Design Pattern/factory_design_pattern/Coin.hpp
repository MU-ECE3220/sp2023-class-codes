#ifndef COIN_HPP
#define COIN_HPP
#include <string>

class Coin {
    public:
        virtual std::string get_description() = 0;
        virtual ~Coin(){};
};

#endif