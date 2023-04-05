PROJECT(DYNAMIC)
LINK_DIRECTORIES(/home/sl/cpluscplus/cmake/lib)
INCLUDE_DIRECTORIES(/home/sl/cpluscplus/cmake/include)
ADD_EXECUTABLE(dynamic main.cc)

#LINK_DIRECTORIES(/home/sl/cpluscplus/cmake/lib)
#TARGET_LINK_LIBRARIES(dynamic /home/sl/cpluscplus/cmake/lib/libslave.a)
TARGET_LINK_LIBRARIES(dynamic libslave.a)
