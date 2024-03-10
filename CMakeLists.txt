cmake_minimum_required(VERSION 3.27)
project(Laba_4)

set(CMAKE_CXX_STANDARD 23)

add_executable(Laba_4 main.cpp
        Vehicle.cpp
        Vehicle.h
        Cars.cpp
        Cars.h
        Engine.cpp
        Engine.h
        People.cpp
        People.h
        Driver.cpp
        Driver.h)
