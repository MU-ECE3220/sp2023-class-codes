#include "code/inc/Coin.hpp"
#include "code/inc/CoinType.hpp"

class CoinFactory {
    public:
        static Coin* get_coin(enum CoinType::coin_type);
};