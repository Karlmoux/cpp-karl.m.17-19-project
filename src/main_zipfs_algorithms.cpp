// main_zipfs_algorithms.cpp
#include "zipfs.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

namespace session19 {
    // Function to calculate the sum of elements in an integer vector
    int calculateSum(const std::vector<int>& numbers) {
        return std::accumulate(numbers.begin(), numbers.end(), 0);
    }

    // Function to sort a vector of strings in alphabetical order
    void sortWords(std::vector<std::string>& words) {
        std::sort(words.begin(), words.end());
    }

    // Function to count the occurrences of a specific word in a vector of strings
    int countOccurrences(const std::vector<std::string>& words, const std::string& target) {
        return std::count(words.begin(), words.end(), target);
    }
}

int main() {
    // Example usage of session19 functions
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = session19::calculateSum(numbers);
    std::cout << "Sum of numbers: " << sum << std::endl;

    std::vector<std::string> words = {"apple", "banana", "apple", "orange"};
    session19::sortWords(words);
    std::cout << "Sorted words: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    int appleCount = session19::countOccurrences(words, "apple");
    std::cout << "Occurrences of 'apple': " << appleCount << std::endl;

    return 0;
}
