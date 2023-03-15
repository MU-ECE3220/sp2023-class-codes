#include "whattotest.cpp"
#include <gtest/gtest.h>

TEST(SquareRootTest, TestingPositiveNumbers) {
    // ASSERT_EQ(expected output, actual output);
    ASSERT_EQ(2.0,squareRoot(4.0));
    ASSERT_EQ(6.0,squareRoot(36.0));
}

TEST(SquareRootTest, TestingNegativeNumbers) {
    ASSERT_EQ(-1.0, squareRoot(-4.0));
    ASSERT_EQ(-1.0, squareRoot(-9.0));
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}