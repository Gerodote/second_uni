# add a header-only lib
add_library(part2 INTERFACE)
target_include_directories(part2
                           INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)