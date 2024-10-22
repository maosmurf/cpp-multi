#include <gtest/gtest.h>
#include "../coolios.hxx"

TEST(CoolioTest, Sqrt_Of_42_Is_6comma4) {
    double result = coolios::sqrt(42);
    EXPECT_EQ(result, 6.4807406984078605);
}

TEST(CoolioTest, Sqrt_Of_0_Is_0) {
    double result = coolios::sqrt(0);
    EXPECT_EQ(result, 0);
}
