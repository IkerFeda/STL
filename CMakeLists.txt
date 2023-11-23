cmake_minimum_required(VERSION 3.26)
project(EJerciciosSTL)

set(CMAKE_CXX_STANDARD 17)

add_executable(EJerciciosSTL StringSTL.cpp
        Size_Empty.cpp
        +Operator.cpp
        cadenas.cpp
        Manipulacion.cpp)
