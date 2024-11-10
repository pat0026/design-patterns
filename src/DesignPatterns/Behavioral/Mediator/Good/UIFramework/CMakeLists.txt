file(GLOB SOURCES "*.cc")
add_library(UIFramework STATIC ${SOURCES})
target_include_directories(UIFramework PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
