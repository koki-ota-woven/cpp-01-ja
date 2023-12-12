#include "tests.hpp"
#include <gtest/gtest.h>
#include <string>

int dummy_main();

TEST(Test, Compilation) {
    std::string input { "4 5" };
    std::string output;
    bool pass { !redirectInputAndCaptureOutput(input, output, dummy_main) };
    ASSERT_EQ(pass, true);
}

TEST(Test, InputOutput) {
    std::string input { "3 6" };
    std::string output;
    std::string expected_output { "Enter two numbers: Maximum is: 6\n" };
    redirectInputAndCaptureOutput(input, output, dummy_main);
    ASSERT_EQ(output, expected_output);
}