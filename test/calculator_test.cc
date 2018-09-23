#include <gtest/gtest.h>
#include <calculator.h>

struct calc_state {
    int a;
    int b;
    int result;
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
    EXPECT_EQ(as.result, calculator->Sum());
}

TEST_P(CalculatorTest, SubCalcTest) {
    auto as = GetParam();
    EXPECT_EQ(as.result, calculator->Sub());
}

TEST_P(CalculatorTest, DivCalcTest) {
    auto as = GetParam();
    EXPECT_EQ(as.result, calculator->Div());
}

TEST_P(CalculatorTest, MulCalcTest) {
    auto as = GetParam();
    EXPECT_EQ(as.result, calculator->Mul());
}

TEST_P(CalculatorTest, RemainCalcTest) {
    auto as = GetParam();
    EXPECT_EQ(as.result, calculator->Remain());
}

INSTANTIATE_TEST_CASE_P(Default, CalculatorTest,
        testing::Values(
                calc_state {1, 1, 2}, calc_state {1, 1, 2}));