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
int element_at(const std::vector<int>& c, int index);

void testElementAt(const std::vector<int>& n, int index) {
    try {
        auto element = element_at(numbers, index);
        ASSERT_EQ(numbers[index], element);
    } catch (...) {
        ASSERT_TRUE(false);
    }
}

TEST(Test, ElementAtZero) {
    testElementAt(numbers, 0);
}

TEST(Test, ElementAtSizeMinusOne) {
    testElementAt(numbers, static_cast<int>(numbers.size() - 1));
}

TEST(Test, ElementAtNegativeOne) {
    ASSERT_THROW(element_at(numbers, -1), std::out_of_range);
}

TEST(Test, ElementAtSize) {
    ASSERT_THROW(element_at(numbers, static_cast<int>(numbers.size())), std::out_of_range);
}