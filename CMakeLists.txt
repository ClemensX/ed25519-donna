cmake_minimum_required(VERSION 3.24)
project(ed25519 C)

#set(CMAKE_C_STANDARD 11)
#msvc:
add_compile_options(-Wall -pedantic)
#mac:
#add_compile_options(-Wall -Wextra -Werror -Wno-error=unused-variable -Wno-error=unused-function
#-Wno-error=implicit-function-declaration)
add_definitions(-DED25519_REFHASH)
add_definitions(-DED25519_TEST)
add_definitions(-DED25519_NO_INLINE_ASM)

file(GLOB sources
        "src/*.h"
        "src/*.c"
)
add_library(ed25519 STATIC ${sources})

add_executable(test src/test.c)
target_link_libraries(test ed25519)
# the usual build/run procedure:
# cd ed25519-donna
# cmake -S . -B build
# cmake --build ./build
# ./build/test
# or win: "C:\dev\cpp\ed25519-donna\build\Debug\test.exe"
