#build the object file
g++ -c --std=c++11 factory.cc

#build and linkage the a.out exe file
g++ -o --std=c++11 a.out test.cc factory.o

# 简单工厂方法可是实现create和实现分离