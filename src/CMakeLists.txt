add_executable(DesignPatterns main.cpp)

if(DEFINED GOOD)
    add_subdirectory("DesignPatterns/Behavioral/Memento/Good")
else()
    add_subdirectory("DesignPatterns/Behavioral/Memento/Bad")
endif()



target_link_libraries(DesignPatterns PRIVATE Memento)


