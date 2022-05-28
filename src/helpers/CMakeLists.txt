cmake_minimum_required(VERSION 3.21)
project(ParticleMovement)

set(CMAKE_CXX_STANDARD 17)

add_library(Helpers STATIC
        StreamStorage.cpp StreamStorage.h
        )
target_include_directories(Helpers PUBLIC .)
target_link_libraries(Helpers PUBLIC )
target_compile_options(Helpers PRIVATE -Wall -Wextra -Werror)
