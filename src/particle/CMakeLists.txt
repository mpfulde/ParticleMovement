cmake_minimum_required(VERSION 3.21)
project(ParticleMovement)

set(CMAKE_CXX_STANDARD 17)

add_library(Particle STATIC
        Particle.cpp Particle.h
        Coordinate.cpp Coordinate.h ParticleTypeList.h)
target_include_directories(Particle PUBLIC .)
target_link_libraries(Particle PRIVATE ObjectPhysics Helpers)
target_compile_options(Particle PRIVATE -Wall -Wextra -Werror)
