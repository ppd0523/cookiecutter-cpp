cmake_minimum_required(VERSION 3.2)
project({{ cookiecutter.project_slug }})

set(CMAKE_CXX_STANDARD 14)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(main
    src/main.cpp
)
target_link_libraries(main ${CONAN_LIBS})

add_executable(test
    test/test.cpp
    src/{{ cookiecutter.project_slug }}/function.cpp
)
target_link_libraries(test ${CONAN_LIBS})
