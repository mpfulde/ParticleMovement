cmake_minimum_required(VERSION 3.21)
project(ParticleMovement)

set(CMAKE_CXX_STANDARD 17)

add_library(ObjectPhysics STATIC
        MovementSystem.cpp MovementSystem.h
        ParticleMovementSystem.cpp ParticleMovementSystem.h)
target_include_directories(ObjectPhysics PUBLIC .)
target_link_libraries(ObjectPhysics PUBLIC Particle)
target_compile_options(ObjectPhysics PRIVATE -Wall -Wextra -Werror)
