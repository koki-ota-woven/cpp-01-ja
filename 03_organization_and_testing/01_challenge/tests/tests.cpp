#include "tests.hpp"
#include <gtest/gtest.h>
#include <string>

int dummy_main();

TEST(Test, Compilation) {
    bool pass { !dummy_main() };
    ASSERT_EQ(pass, true);
}

TEST(Test, Output) {    
    std::string expected_output { "Temperature reading: 25.5\n" };
    std::string output = captureOutput(dummy_main);
    ASSERT_EQ(output, expected_output);
}