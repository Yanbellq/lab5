cmake_minimum_required(VERSION 3.27)
project(lab4)

set(CMAKE_CXX_STANDARD 23)

add_executable(lab4 main.cpp
        bikeConfig.cpp
        client.cpp
        employer.cpp
        operator.cpp
        mountainBike.cpp
        mountainBike.h
        people.cpp
        people.h
        mtbBike.cpp
        mtbBike.h
)
