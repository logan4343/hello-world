SET(SRC_LIST main.cc teachers.cc students.cc)

MESSAGE(STATUS "hello, I am logan")
MESSAGE(STATUS "this is binary dir = " ${PROJECT_BINARY_DIR})
MESSAGE(STATUS "this is source dir = " ${PROJECT_SOURCE_DIR})
#ADD_EXECUTABLE(signal main.cc teachers.cc students.cc)
ADD_EXECUTABLE(signal ${SRC_LIST})
