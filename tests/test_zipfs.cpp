// test_zipfs.cpp
#include "zipfs.h"
#include <gtest/gtest.h>
#include <vector>
#include <string>

TEST(Session19Tests, CalculateSum) {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    EXPECT_EQ(session19::calculateSum(numbers), 15);
}

TEST(Session19Tests, CountOccurrences) {
    std::vector<std::string> words = {"apple", "banana", "apple", "orange"};
    EXPECT_EQ(session19::countOccurrences(words, "apple"), 2);
}
