cmake_minimum_required(VERSION 3.27)
project(lab4)

set(CMAKE_CXX_STANDARD 23)

add_executable(lab4 main.cpp
        classes/bikeConfig.cpp
        classes/client.cpp
        classes/employer.cpp
        classes/people.cpp
        classes/mtbBike.cpp
        classes/bmxBike.cpp
)
