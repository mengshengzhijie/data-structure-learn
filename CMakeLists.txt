cmake_minimum_required(VERSION 3.30)
project(data_structure_learn C)

set(CMAKE_C_STANDARD 23)

file(GLOB SRC_FILES "src/learn/*.c")
foreach (SRC_FILE ${SRC_FILES})
    get_filename_component(EXE_NAME ${SRC_FILE} NAME_WE)
    add_executable(${EXE_NAME} ${SRC_FILE})
#        target_link_directories(${EXE_NAME} PRIVATE m)
endforeach ()
