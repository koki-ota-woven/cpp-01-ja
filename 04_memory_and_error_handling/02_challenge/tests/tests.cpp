#include "tests.hpp"
#include <gtest/gtest.h>
#include <string>

int dummy_main();

TEST(Test, Compilation) {
    bool pass { !dummy_main() };
    ASSERT_EQ(pass, true);
}

extern int a;
extern int b;
void swap_int(int* a, int* b);

TEST(Test, swap_int) {
    int old_a { a };
    int old_b { b };
    int* old_a_ptr { &a };
    int* old_b_ptr { &b };
    swap_int(&a, &b);
    ASSERT_EQ(old_a, b);
    ASSERT_EQ(old_b, a);
    ASSERT_EQ(old_a_ptr, &a);
    ASSERT_EQ(old_b_ptr, &b);
}

TEST(Test, Output) {
    int old_a { a };
    int old_b { b };
    std::string output = captureOutput(dummy_main);
    std::string expected_output = "Before swap: a = " + std::to_string(old_a) + ", b = " + std::to_string(old_b) + "\n" +
                                  "After swap: a = " + std::to_string(a) + ", b = " + std::to_string(b) + "\n";
    ASSERT_EQ(output, expected_output);
}