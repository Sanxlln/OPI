cmake_minimum_required(VERSION 3.10)

project(MyProgram)

message("${PROJECT_NAME}")

set(SOURCES
    main.cpp
    list.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

# Файли тестів
set(SOURCES_TEST
    empty_test.cpp
    erase_back_test.cpp
    erase_front_test.cpp
    insert_back_test.cpp
    insert_front_test.cpp
    iterator_tests.cpp
    size_test.cpp
)

enable_testing()

