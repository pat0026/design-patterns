include(design_pattern)
design_pattern(TARGET Mediator)

add_subdirectory(UIFramework)
target_link_libraries(Mediator PUBLIC UIFramework)
