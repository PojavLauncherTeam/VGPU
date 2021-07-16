cmake_minimum_required(VERSION 3.4.1)

project(GL)

add_library( # Specifies the name of the library.
             GL

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             pack.c)
             
target_link_libraries(GL -lGLESv3 -ldl)
