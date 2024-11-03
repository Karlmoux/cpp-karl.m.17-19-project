# src/CMakeLists.txt
add_executable(zipfs_containers main_zipfs_containers.cpp)
add_executable(zipfs_algorithms main_zipfs_algorithms.cpp)

# Include header files
target_include_directories(zipfs_containers PRIVATE ../include)
target_include_directories(zipfs_algorithms PRIVATE ../include)
