#include "tests.hpp"
#include <gtest/gtest.h>
#include <string>
#include <vector>

int dummy_main();

TEST(Test, Compilation) {
    bool pass { !dummy_main() };
    ASSERT_EQ(pass, true);
}

extern std::vector<int> numbers;
std::vector<int> double_elements(const std::vector<int>& c);

TEST(Test, DoubleElements) {
    auto doubled = double_elements(numbers);
    for (int i = 0; i < doubled.size(); ++i) {
        ASSERT_EQ(doubled[i], numbers[i] * 2);
    }
}