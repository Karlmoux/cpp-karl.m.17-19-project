// main_zipfs_containers.cpp
#include "zipfs.h"
#include <iostream>
#include <vector>

void session17::processVector() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    for (auto num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    session17::processVector();
    return 0;
}
