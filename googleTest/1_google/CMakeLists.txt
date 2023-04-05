#CMAKE_MINIMUM_REQUIRED(VERSION 3.21)
cmake_minimum_required(VERSION 3.20)
PROJECT(GOOGLETEST)

SET(CMAKE_CXX_STANDARD 17)
INCLUDE_DIRECTORIES(./include)



SET(SRC_LIST main.cc)

ADD_EXECUTABLE(googleTest ${SRC_LIST})

#TARGET_LINK_LIBRARIES(googleTest  libgmock.a libgmock_main.a libgtest.a libgtest_main.a)
TARGET_LINK_LIBRARIES(googleTest  gmock gtest pthread)
