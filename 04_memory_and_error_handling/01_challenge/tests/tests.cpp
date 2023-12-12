#include "tests.hpp"
#include <gtest/gtest.h>
#include <string>

int dummy_main();

TEST(Test, Compilation) {
    bool pass { !dummy_main() };
    ASSERT_EQ(pass, true);
}

extern int x;
extern int* p;

TEST(Test, Address) {
    ASSERT_EQ(p, &x);
}

TEST(Test, PrintAddressAndValue) {
    std::string output = captureOutput(dummy_main);
    std::string expected_output = pointerToString(p) + "\n" + std::to_string(x) + "\n";
    ASSERT_EQ(output, expected_output);
}