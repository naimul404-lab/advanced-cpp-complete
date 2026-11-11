cmake_minimum_required(VERSION 3.16)
project(advanced_cpp_complete LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 01_basics
add_executable(hello 01_basics/hello.cpp)
add_executable(types_and_casts 01_basics/types_and_casts.cpp)

# 02_oop
add_executable(person 02_oop/person.cpp)
add_executable(inheritance_demo 02_oop/inheritance.cpp)
add_executable(polymorphism_demo 02_oop/polymorphism.cpp)
add_executable(operator_overloading_demo 02_oop/operator_overloading.cpp)
add_executable(constructor_destructor_demo 02_oop/constructor_destructor.cpp)

# 03_stl
add_executable(vector_demo 03_stl/vector_demo.cpp)
add_executable(map_demo 03_stl/map_demo.cpp)
add_executable(unordered_map_demo 03_stl/unordered_map_demo.cpp)
add_executable(queue_stack_demo 03_stl/queue_stack.cpp)
add_executable(algorithm_demo 03_stl/algorithm_demo.cpp)

# 04_templates
add_executable(template_function_demo 04_templates/template_function.cpp)
add_executable(template_class_demo 04_templates/template_class.cpp)
add_executable(variadic_template_demo 04_templates/variadic_template.cpp)
add_executable(traits_demo 04_templates/traits_demo.cpp)
add_executable(decltype_demo 04_templates/decltype_demo.cpp)

# 05_memory
add_executable(smart_ptr_demo 05_memory/smart_ptr_demo.cpp)
add_executable(unique_ptr_array_demo 05_memory/unique_ptr_array.cpp)
add_executable(exception_demo 05_memory/exception_demo.cpp)

# 06_concurrency
add_executable(thread_demo 06_concurrency/thread_demo.cpp)
add_executable(mutex_demo 06_concurrency/mutex_demo.cpp)
add_executable(async_demo 06_concurrency/async_demo.cpp)
add_executable(condition_variable_demo 06_concurrency/condition_variable_demo.cpp)

# 07_file_io
add_executable(file_io_demo 07_file_io/file_io.cpp)
add_executable(binary_io_demo 07_file_io/binary_io.cpp)

# 08_projects
add_executable(calculator 08_projects/calculator.cpp)
add_executable(todo_app 08_projects/todo_app.cpp)
add_executable(atm_simulator 08_projects/atm_simulator.cpp)
add_executable(student_management 08_projects/student_management.cpp)
add_executable(employee_management 08_projects/employee_management.cpp)
add_executable(banking_system 08_projects/banking_system.cpp)
add_executable(library_management 08_projects/library_management.cpp)
add_executable(inventory_system 08_projects/inventory_system.cpp)
