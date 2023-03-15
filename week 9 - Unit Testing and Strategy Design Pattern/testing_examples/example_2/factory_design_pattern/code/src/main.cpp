#include <iostream>
#include "code/inc/Coin.hpp"
#include "code/inc/CoinFactory.hpp"
#include "code/inc/CoinType.hpp"
#include "code/inc/UndefinedCoinType.hpp"

int main() {

    try {
        Coin* c1 = CoinFactory::get_coin(CoinType::coin_type::GOLD_COIN);
        std::cout << c1->get_description() << std::endl;
        Coin* c2 = CoinFactory::get_coin(CoinType::coin_type::SILVER_COIN);
        std::cout << c2->get_description() << std::endl;
        Coin* c3 = CoinFactory::get_coin(CoinType::coin_type(2));
        std::cout << c3->get_description() << std::endl;
    } catch(UndefinedCoinType &ex) {
        std::cout << ex.what() << std::endl;
    }
    return EXIT_SUCCESS;
}