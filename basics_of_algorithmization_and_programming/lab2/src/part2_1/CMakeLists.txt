# add a header-only lib
add_library(part1 INTERFACE)
target_include_directories(part1
                           INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)