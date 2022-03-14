cmake_minimum_required(VERSION 3.10)

# set the project name
project(RayTracingInOneWeekend VERSION 1.0.0)

find_package( glm REQUIRED )

add_library(rt_vec3 rt_vec3.cpp)

add_executable(Main main.cpp)

target_link_directories(Main PUBLIC
    glm,
    rt_vec3
)