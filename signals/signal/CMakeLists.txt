PROJECT(SIGNAL)
SET(CMAKE_CXX_FLAGS "-std=c++11")
ADD_SUBDIRECTORY(src bin)
MESSAGE(STATUS "the CMAKE_INSTALL_PREFIX = " ${CMAKE_INSTALL_PREFIX})
INSTALL(FILES README COPYRIGHT  DESTINATION logan)
INSTALL(PROGRAMS  run.sh DESTINATION logan/run/)
INSTALL(DIRECTORY  doc DESTINATION logan)
