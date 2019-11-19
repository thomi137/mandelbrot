cmake_minimum_required(VERSION 3.15)
project(Mandelbrot)

set(CMAKE_CXX_STANDARD 11)

add_executable(Mandelbrot main.cpp BitmapFileHeader.h BitmapInfoHeader.h Bitmap.cpp Bitmap.h)