cmake_minimum_required(VERSION 3.28)
project(modulesOS)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    # Additional setup for GCC
    add_compile_options(-fmodules-ts)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    # Additional setup for Clang
    add_compile_options(-fmodules-ts)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    # Additional setup for MSVC
    add_compile_options(/experimental:module /module:output)
endif()

add_executable(${PROJECT_NAME} main.cpp
       )


target_sources(${PROJECT_NAME} PRIVATE
        FILE_SET all_my_modules TYPE CXX_MODULES
        BASE_DIRS
        ${PROJECT_SOURCE_DIR}
        FILES
        mod.Test.cppm)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 23)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_EXTENSIONS OFF)
