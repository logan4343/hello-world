PROJECT(CHOOSE)

OPTION(TEST_OPTION "test option" ON)

SET(SRC_LIST main.cc)
IF (DEFINED TEST_OPTION)
   MESSAGE(STATUS, "defined test_option")
ELSE ()
   MESSAGE(STATUS, "not defined test_option")
ENDIF()


IF (TEST_OPTION)
   MESSAGE(STATUS, "test_option on")
    add_definitions(-DTEST_OPTION)
ELSE ()
   MESSAGE(STATUS, "test_option off")
ENDIF()

ADD_EXECUTABLE(choose ${SRC_LIST})


