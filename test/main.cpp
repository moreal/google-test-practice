#include <gtest/gtest.h>

class GTestTest : public ::testing::Test {
protected:
    virtual void TearDown() {

    }

    virtual void SetUp() {

    }
public:
    int i { 0 };

    GTestTest() = default;
};

TEST(basic_check, test_eq) {
    EXPECT_EQ(1, 1);
}

TEST_F(GTestTest, UsingClassTest) {
    EXPECT_EQ(i, 1);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}