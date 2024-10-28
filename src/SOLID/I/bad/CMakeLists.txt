file(GLOB SOURCES  "*.cc")

add_library(I OBJECT ${SOURCES})
target_include_directories(I PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)