project(GOOGLETEST)

SET(SRC_LIST main.cc sample.cc)

add_executable(googletest ${SRC_LIST})

target_link_libraries(googletest gtest gmock pthread)
