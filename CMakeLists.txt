cmake_minimum_required(VERSION 3.10)
project(ZipfsProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add subdirectories for the source and tests folders
add_subdirectory(src)
add_subdirectory(tests)
