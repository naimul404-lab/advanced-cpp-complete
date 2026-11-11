cmake_minimum_required(VERSION 3.16)
project(advanced_cpp_complete LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(hello 01_basics/hello.cpp)
add_executable(types_and_casts 01_basics/types_and_casts.cpp)

add_executable(person 02_oop/person.cpp)
add_executable(inheritance_demo 02_oop/inheritance.cpp)
add_executable(polymorphism_demo 02_oop/polymorphism.cpp)

add_executable(vector_demo 03_stl/vector_demo.cpp)
add_executable(map_demo 03_stl/map_demo.cpp)
add_executable(algorithm_demo 03_stl/algorithm_demo.cpp)

add_executable(template_function_demo 04_templates/template_function.cpp)
add_executable(template_class_demo 04_templates/template_class.cpp)
add_executable(variadic_template_demo 04_templates/variadic_template.cpp)

add_executable(smart_ptr_demo 05_memory/smart_ptr_demo.cpp)

add_executable(thread_demo 06_concurrency/thread_demo.cpp)
add_executable(mutex_demo 06_concurrency/mutex_demo.cpp)

add_executable(file_io_demo 07_file_io/file_io.cpp)

add_executable(calculator 08_projects/calculator.cpp)
add_executable(todo_app 08_projects/todo_app.cpp)
