cmake_minimum_required(VERSION 3.6)
project(StateMachine1)

set(CMAKE_CXX_STANDARD 11)

add_executable(StateMachine1 main.cpp StateMachine.cpp StateMachine.h Lamp.cpp Lamp.h)