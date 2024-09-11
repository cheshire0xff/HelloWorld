cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

add_executable(app "main.cpp")
target_include_directories(app PRIVATE ".")