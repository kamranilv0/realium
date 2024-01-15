cmake_minimum_required(VERSION 3.10)
project(realium)

set(CMAKE_CXX_STANDARD 17)

find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

include_directories(${GLEW_INCLUDE_DIRS})

link_libraries(${GLEW_LIBRARIES})

add_executable(realium main.cpp src/graphics/window.cpp)

target_link_libraries(realium GLEW::GLEW glfw ${OPENGL_gl_LIBRARY})
