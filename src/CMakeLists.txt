cmake_minimum_required(VERSION 3.21)
project(ParticleMovement)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(particle)
add_subdirectory(physics)

add_executable(ParticleMovement main.cpp)
target_link_libraries(ParticleMovement PUBLIC Particle ObjectPhysics Helpers)
