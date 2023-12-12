#include "tests.hpp"
#include <gtest/gtest.h>
#include <string_view>

int dummy_main();

TEST(Test, Compilation) {
    bool pass { !dummy_main() };
    ASSERT_EQ(pass, true);
}

TEST(Test, Output) {
    ASSERT_EQ(captureOutput(dummy_main), "81\n");
}

int power(int base, int exponent = 2);

TEST(Test, Power) {
    ASSERT_EQ(power(5), 25);
    ASSERT_EQ(power(5, 5), 3125);
}