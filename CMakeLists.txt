cmake_minimum_required(VERSION 3.16)
project(advanced_cpp_complete LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Threads REQUIRED)

function(add_cpp_example target source)
    add_executable(${target} ${source})
    target_link_libraries(${target} PRIVATE Threads::Threads)
    if(MSVC)
        target_compile_options(${target} PRIVATE /W4)
    else()
        target_compile_options(${target} PRIVATE -Wall -Wextra -Wpedantic)
    endif()
endfunction()

# 01_basics
add_cpp_example(hello 01_basics/hello.cpp)
add_cpp_example(types_and_casts 01_basics/types_and_casts.cpp)

# 02_oop
add_cpp_example(person 02_oop/person.cpp)
add_cpp_example(inheritance_demo 02_oop/inheritance.cpp)
add_cpp_example(polymorphism_demo 02_oop/polymorphism.cpp)
add_cpp_example(operator_overloading_demo 02_oop/operator_overloading.cpp)
add_cpp_example(constructor_destructor_demo 02_oop/constructor_destructor.cpp)

# 03_stl
add_cpp_example(vector_demo 03_stl/vector_demo.cpp)
add_cpp_example(map_demo 03_stl/map_demo.cpp)
add_cpp_example(unordered_map_demo 03_stl/unordered_map_demo.cpp)
add_cpp_example(queue_stack_demo 03_stl/queue_stack.cpp)
add_cpp_example(algorithm_demo 03_stl/algorithm_demo.cpp)

# 04_templates
add_cpp_example(template_function_demo 04_templates/template_function.cpp)
add_cpp_example(template_class_demo 04_templates/template_class.cpp)
add_cpp_example(variadic_template_demo 04_templates/variadic_template.cpp)
add_cpp_example(traits_demo 04_templates/traits_demo.cpp)
add_cpp_example(decltype_demo 04_templates/decltype_demo.cpp)

# 05_memory
add_cpp_example(smart_ptr_demo 05_memory/smart_ptr_demo.cpp)
add_cpp_example(unique_ptr_array_demo 05_memory/unique_ptr_array.cpp)
add_cpp_example(exception_demo 05_memory/exception_demo.cpp)

# 06_concurrency
add_cpp_example(thread_demo 06_concurrency/thread_demo.cpp)
add_cpp_example(mutex_demo 06_concurrency/mutex_demo.cpp)
add_cpp_example(async_demo 06_concurrency/async_demo.cpp)
add_cpp_example(condition_variable_demo 06_concurrency/condition_variable_demo.cpp)

# 07_file_io
add_cpp_example(file_io_demo 07_file_io/file_io.cpp)
add_cpp_example(binary_io_demo 07_file_io/binary_io.cpp)

# 08_projects
add_cpp_example(calculator 08_projects/calculator.cpp)
add_cpp_example(todo_app 08_projects/todo_app.cpp)
add_cpp_example(atm_simulator 08_projects/atm_simulator.cpp)
add_cpp_example(student_management 08_projects/student_management.cpp)
add_cpp_example(employee_management 08_projects/employee_management.cpp)
add_cpp_example(banking_system 08_projects/banking_system.cpp)
add_cpp_example(library_management 08_projects/library_management.cpp)
add_cpp_example(inventory_system 08_projects/inventory_system.cpp)
add_cpp_example(tic_tac_toe 08_projects/tic_tac_toe.cpp)
add_cpp_example(expense_tracker 08_projects/expense_tracker.cpp)
add_cpp_example(word_counter 08_projects/word_counter.cpp)
