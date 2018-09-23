#include <gtest/gtest.h>
#include <calculator.h>

struct calc_state {
    int a;
    int b;
    int sum, sub, mul, div, remain;
};

struct CalculatorTest : public testing::WithParamInterface<calc_state>, testing::Test{
    Calculator *calculator;

    CalculatorTest() {
        calculator = new Calculator(GetParam().a, GetParam().b);
    }

    ~CalculatorTest() {
        delete calculator;
    }
};

TEST_P(CalculatorTest, SumCalcTest) {
    auto as = GetParam();
    EXPECT_EQ(as.sum, calculator->Sum());
}

TEST_P(CalculatorTest, SubCalcTest) {
    auto as = GetParam();
    EXPECT_EQ(as.sub, calculator->Sub());
}

TEST_P(CalculatorTest, DivCalcTest) {
    auto as = GetParam();
    EXPECT_EQ(as.div, calculator->Div());
}

TEST_P(CalculatorTest, MulCalcTest) {
    auto as = GetParam();
    EXPECT_EQ(as.mul, calculator->Mul());
}

TEST_P(CalculatorTest, RemainCalcTest) {
    auto as = GetParam();
    EXPECT_EQ(as.remain, calculator->Remain());
}

INSTANTIATE_TEST_CASE_P(Default, CalculatorTest,
        testing::Values(
                calc_state {1, 1, 2, 0, 1, 1, 0},
                calc_state {2, 5, 7, -3, 10, 0, 2}));