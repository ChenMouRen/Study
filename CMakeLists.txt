cmake_minimum_required(VERSION 3.23)
project (Study C)

set(CMAKE_C_STANDARD 23)

include_directories(tables)

#file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
#foreach(file ${files})
#    get_filename_component(name ${file} NAME)
#    add_executable(${name} ${file})
#endforeach()

file(GLOB_RECURSE files "${CMAKE_SOURCE_DIR}/*.c")
list(FILTER files EXCLUDE REGEX "${CMAKE_SOURCE_DIR}/cmake*")
add_executable(study ${files} )