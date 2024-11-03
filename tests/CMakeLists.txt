# tests/CMakeLists.txt
enable_testing()

# Add the test executable, including the necessary source file
add_executable(test_zipfs test_zipfs.cpp ../src/main_zipfs_algorithms.cpp)

# Include header files
target_include_directories(test_zipfs PRIVATE ../include)

# Link with GoogleTest and other necessary targets
find_package(GTest REQUIRED)
target_link_libraries(test_zipfs GTest::GTest GTest::Main)

# Register the test
add_test(NAME zipfs_tests COMMAND test_zipfs)
