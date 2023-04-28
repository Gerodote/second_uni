message(STATUS "Adding doctest submodule")
include(ExternalProject)
find_package(Git REQUIRED)

ExternalProject_Add(
    doctest
    PREFIX ${CMAKE_BINARY_DIR}/doctest
    GIT_REPOSITORY https://github.com/doctest/doctest.git
    TIMEOUT 10
    UPDATE_COMMAND ${GIT_EXECUTABLE} pull
    CONFIGURE_COMMAND ""
    BUILD_COMMAND ""
    INSTALL_COMMAND ""
    LOG_DOWNLOAD ON
)

# Expose required variable (DOCTEST_INCLUDE_DIR) to parent scope
ExternalProject_Get_Property(doctest source_dir)
set(DOCTEST_INCLUDE_DIR ${source_dir}/doctest CACHE INTERNAL "Path to include folder for doctest")

# Set up executable target
add_executable(tests_target
    all_tests.cpp
)

# Link libraries and include directories
target_link_libraries(tests_target PRIVATE calc)
target_include_directories(tests_target PRIVATE ${DOCTEST_INCLUDE_DIR})

# Add the test as a CTest test
add_test(
    NAME some_tests
    COMMAND tests_target
)
