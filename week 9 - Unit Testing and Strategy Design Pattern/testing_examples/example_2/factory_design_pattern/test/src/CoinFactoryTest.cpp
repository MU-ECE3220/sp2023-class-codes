#include "test/inc/CoinFactoryTest.hpp"

TEST_F(CoinFactoryTest, test_gold_coin) {
    ASSERT_EQ("This is a Gold coin.", coin->get_description());
}
