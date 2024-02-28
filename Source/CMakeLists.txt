file(GLOB SOURCES "src/*.cpp")

include_directories(include)
include_directories(../../Dependencies/glew/include)
include_directories(../../Dependencies/glfw/include)

add_executable(calistir ${SOURCES})

target_link_libraries(calistir PRIVATE ../../Dependencies/glfw/lib/glfw3)
target_link_libraries(calistir PRIVATE ../../Dependencies/glew/lib/Debug/glew32d)