#include "code/inc/CoinFactory.hpp"
#include "code/inc/GoldCoin.hpp"
#include "code/inc/SilverCoin.hpp"
#include "code/inc/UndefinedCoinType.hpp"

Coin* CoinFactory::get_coin(enum CoinType::coin_type type) {
    if(type == CoinType::coin_type::GOLD_COIN) {
        return new GoldCoin();
    }
    else if (type == CoinType::coin_type::SILVER_COIN) {
        return new SilverCoin();
    }
    else {
        throw UndefinedCoinType();
    }
}