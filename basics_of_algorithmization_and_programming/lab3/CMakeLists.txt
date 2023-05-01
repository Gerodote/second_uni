cmake_minimum_required(VERSION 3.15)

#adding CPM
set(CPM_DOWNLOAD_VERSION 0.38.1)

if(CPM_SOURCE_CACHE)
  set(CPM_DOWNLOAD_LOCATION "${CPM_SOURCE_CACHE}/cpm/CPM_${CPM_DOWNLOAD_VERSION}.cmake")
elseif(DEFINED ENV{CPM_SOURCE_CACHE})
  set(CPM_DOWNLOAD_LOCATION "$ENV{CPM_SOURCE_CACHE}/cpm/CPM_${CPM_DOWNLOAD_VERSION}.cmake")
else()
  set(CPM_DOWNLOAD_LOCATION "${CMAKE_BINARY_DIR}/cmake/CPM_${CPM_DOWNLOAD_VERSION}.cmake")
endif()

if(NOT (EXISTS ${CPM_DOWNLOAD_LOCATION}))
  message(STATUS "Downloading CPM.cmake to ${CPM_DOWNLOAD_LOCATION}")
  file(DOWNLOAD
       https://github.com/TheLartians/CPM.cmake/releases/download/v${CPM_DOWNLOAD_VERSION}/CPM.cmake
       ${CPM_DOWNLOAD_LOCATION}
  )
endif()

include(${CPM_DOWNLOAD_LOCATION})



# adding boost
CPMAddPackage(
  NAME Boost
  VERSION 1.82.0
  GITHUB_REPOSITORY "boostorg/boost"
  GIT_TAG "boost-1.82.0"
  OPTIONS 
    "COMPONENTS algorithm"
)

project(lab3 VERSION 0.1.0)

add_executable(lab3 main.cpp)
target_link_libraries(lab3 PRIVATE Boost::algorithm)
