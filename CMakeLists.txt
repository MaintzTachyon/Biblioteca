cmake_minimum_required(VERSION 3.10)
project(Biblioteca)
set(CMAKE_CXX_STANDARD 20)

add_executable(biblio
main.cpp Biblioteca.cpp Libro.cpp
)

target_include_directories(biblio PRIVATE .)
