cmake_minimum_required(VERSION 3.25)

project(raytracinginoneweekend)

aux_source_directory(src SRC)

add_executable(main ${SRC})

include_directories(include)