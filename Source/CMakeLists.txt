file(GLOB SOURCES "src/*.cpp")

include_directories(include)
include_directories(../../Dependencies/glew/include)
include_directories(../../Dependencies/glfw/include)

add_executable(calistir ${SOURCES})

# Link GLFW library
target_link_libraries(calistir PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../Dependencies/glfw/lib/libglfw3.a)

# Link GLEW library
target_link_libraries(calistir PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../Dependencies/glew/lib/libGLEW.a)

target_link_libraries(calistir PRIVATE dl pthread)

find_package(OpenGL REQUIRED)
target_link_libraries(calistir PRIVATE OpenGL::GL)
