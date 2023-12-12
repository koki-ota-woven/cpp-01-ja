#include "tests.hpp"
#include <gtest/gtest.h>
#include <string>

int dummy_main();

TEST(Test, Compilation) {
    std::string input { "4 5 6" };
    std::string output;
    bool pass { !redirectInputAndCaptureOutput(input, output, dummy_main) };
    ASSERT_EQ(pass, true);
}

TEST(Test, InputOutput) {
    std::string input { "3 4 6" };
    std::string output;
    std::string expected_output { "Enter three numbers: Average is: 4.33333\n" };
    redirectInputAndCaptureOutput(input, output, dummy_main);
    ASSERT_EQ(output, expected_output);
}