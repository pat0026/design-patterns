add_executable(DesignPatterns main.cpp)

add_subdirectory("DesignPatterns/Behavioral/Memento")

target_link_libraries(DesignPatterns PRIVATE Memento)


