macro(design_pattern)
    set(oneValueArgs TARGET)
    cmake_parse_arguments(design_pattern
        "${options}" "${oneValueArgs}" "${multiValueArgs}"
        ${ARGN}
    )

    if(NOT DEFINED design_pattern_TARGET)
        message(FATAL_ERROR "Incorrect design_pattern arguments")
    endif()

    file(GLOB SOURCES "*.cc")
    add_library(${design_pattern_TARGET} OBJECT ${SOURCES})
    target_include_directories(${design_pattern_TARGET} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
endmacro()
