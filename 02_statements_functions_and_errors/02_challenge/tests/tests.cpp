#include "tests.hpp"
#include <gtest/gtest.h>
#include <string_view>

int dummy_main();

TEST(Test, Compilation) {
    bool pass { !dummy_main() };
    ASSERT_EQ(pass, true);
}

TEST(Test, Output) {
    ASSERT_EQ(captureOutput(dummy_main), "Factorial of 4 is 24\n");
}

int factorial(int n);

TEST(Test, Factorial) {
    ASSERT_EQ(factorial(5), 120);
}