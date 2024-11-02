add_executable(DesignPatterns main.cpp)

if(NOT DEFINED DP_TARGET)
    set(DP_TARGET Memento)
endif()

if(DEFINED CUSTOM_PATH)
    add_subdirectory("DesignPatterns/Behavioral/${DP_TARGET}/${CUSTOM_PATH}")
elseif(DEFINED GOOD)
    add_subdirectory("DesignPatterns/Behavioral/${DP_TARGET}/Good")
else()
    add_subdirectory("DesignPatterns/Behavioral/${DP_TARGET}/Bad")
endif()



target_link_libraries(DesignPatterns PRIVATE ${DP_TARGET})


