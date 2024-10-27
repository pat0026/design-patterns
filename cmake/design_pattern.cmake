macro(design_pattern)
    set(options BAD GOOD)
    set(oneValueArgs TARGET)
    cmake_parse_arguments(design_pattern
        "${options}" "${oneValueArgs}" "${multiValueArgs}"
        ${ARGN}
    )

    if(design_pattern_GOOD)
        add_subdirectory(Good)
    elseif(design_pattern_BAD)
        add_subdirectory(Bad)
    else()
        message(FATAL_ERROR "Incorrect design_pattern arguments")
    endif()

    file(GLOB SOURCES "*.cc")
    list(APPEND SOURCES ${SUB_SOURCES})
    add_library(${design_pattern_TARGET} OBJECT ${SOURCES})
    target_include_directories(${design_pattern_TARGET} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ${SUB_INCLUDE})
endmacro()
