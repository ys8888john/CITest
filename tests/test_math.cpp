#include "math_utils.h"
#include <gtest/gtest.h>

TEST(MathTest, AddPositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(MathTest, AddNegativeNumbers) {
    EXPECT_EQ(add(-1, -1), -2);
}