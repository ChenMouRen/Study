cmake_minimum_required(VERSION 3.23)
project (Study C)

set(CMAKE_C_STANDARD 23)

include_directories(tables)

file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
foreach (file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file} tables/multi_tables.c nar_number/nar_number.c sequence/sequence.c tree/Tree.c music/decode.c tower/han_luo_tower.c define_func/define_func.h define_func/define_func.c)
    target_compile_definitions(${name} PUBLIC DEBUG)
endforeach ()
