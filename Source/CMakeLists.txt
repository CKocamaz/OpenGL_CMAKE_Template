file(GLOB SOURCES "src/*.cpp")

set(CMAKE_CXX_STANDARD 11)
#include directories
set(GLFW_DIR ${CMAKE_SOURCE_DIR}/Dependencies/glfw/include)
set(GLEW_DIR ${CMAKE_SOURCE_DIR}/Dependencies/glew/include)
#Lib Directories
set(GLFW_LIB_DIR ${CMAKE_SOURCE_DIR}/Dependencies/glfw/lib)
set(GLEW_LIB_DIR ${CMAKE_SOURCE_DIR}/Dependencies/glew/lib)

include_directories(include)
include_directories(${GLFW_DIR})
include_directories(${GLEW_DIR})

add_executable(calistir ${SOURCES})

# Link GLFW library
target_link_libraries(calistir PRIVATE ${GLFW_LIB_DIR}/libglfw3.a)

# Link GLEW library
target_link_libraries(calistir PRIVATE ${GLEW_LIB_DIR}/libGLEW.a)

target_link_libraries(calistir PRIVATE dl pthread)

find_package(OpenGL REQUIRED)
target_link_libraries(calistir PRIVATE OpenGL::GL)
