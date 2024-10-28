if(NOT EXISTS "Good")
    file(MAKE_DIRECTORY "Good")
endif()

if(NOT EXISTS "Bad")
    file(MAKE_DIRECTORY "Bad")
endif()

if(NOT EXISTS "Good/include")
    file(MAKE_DIRECTORY "Good/include")
endif()

if(NOT EXISTS "Bad/include")
    file(MAKE_DIRECTORY "Bad/include")
endif()

if(NOT DEFINED TEMPLATE_DIR)
    set(TEMPLATE_DIR ${CMAKE_CURRENT_LIST_DIR}/../Templates)
endif()

if(NOT DEFINED TARGET)
    get_filename_component(TARGET ${CMAKE_CURRENT_SOURCE_DIR} NAME)
endif()
message("${TARGET}")

if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Good/CMakeLists.txt)
    configure_file(${TEMPLATE_DIR}/example_template.CMakeLists.txt.in ${CMAKE_CURRENT_SOURCE_DIR}/Good/CMakeLists.txt)
endif()

if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Bad/CMakeLists.txt)
    configure_file(${TEMPLATE_DIR}/example_template.CMakeLists.txt.in ${CMAKE_CURRENT_SOURCE_DIR}/Bad/CMakeLists.txt)
endif()