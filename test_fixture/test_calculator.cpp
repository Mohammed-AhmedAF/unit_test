#include <gtest/gtest.h>
#include "calculator.h"

// Test fixture
class CalculatorTest : public ::testing::Test {
protected:
    Calculator calc;

    void SetUp() override {
        // Optional setup before each test
    }

    void TearDown() override {
        // Optional cleanup after each test
    }
};

// Tests
TEST_F(CalculatorTest, AdditionWorks) {
    EXPECT_EQ(calc.Add(2, 3), 5);
    EXPECT_EQ(calc.Add(-1, -1), -2);
    EXPECT_EQ(calc.Add(-5, 10), 5);
}

TEST_F(CalculatorTest, SubtractionWorks) {
    EXPECT_EQ(calc.Subtract(10, 4), 6);
    EXPECT_EQ(calc.Subtract(-3, -3), 0);
    EXPECT_EQ(calc.Subtract(0, 5), -5);
}

