cmake_minimum_required(VERSION 3.28)
project(HotelManagementSystem)

set(CMAKE_CXX_STANDARD 17)

add_executable(HotelManagementSystem main.cpp
        HotelSystem.cpp
        HotelSystem.h
        Guest.cpp
        Guest.h
        Room.cpp
        Room.h
        Booking.cpp
        Booking.h)
