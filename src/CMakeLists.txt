add_executable(DesignPatterns main.cpp)

add_subdirectory(SOLID/S/good)

target_link_libraries(DesignPatterns S)

