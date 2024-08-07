cmake_minimum_required(VERSION 3.28)
project(PokemonSaveEditor C)

set(CMAKE_C_STANDARD 17)

add_executable(PokemonSaveEditor main.c gen1rw.c)