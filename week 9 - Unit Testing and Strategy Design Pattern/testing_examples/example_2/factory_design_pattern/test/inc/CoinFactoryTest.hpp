#ifndef COINFACTORYTEST_HPP
#define COINFACTORYTEST_HPP

#include <gtest/gtest.h>
#include "code/inc/CoinFactory.hpp"

using ::testing::Test;

class CoinFactoryTest : public Test {
    protected:
        CoinFactory* factory;
        Coin* coin;

        // Prepare test cases, aka. initialization
        void SetUp() override {
            factory = new CoinFactory();
            coin = factory->get_coin(CoinType::coin_type::GOLD_COIN);
        }

        void TearDown() override {
            delete factory;
            delete coin;
        }
};

#endif