file(GLOB SOURCES "*.cc")

add_library(S OBJECT ${SOURCES})
target_include_directories(S PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

message("Current binary DIR ${CMAKE_CURRENT_BINARY_DIR}/include")