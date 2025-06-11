cmake_minimum_required(VERSION 3.10)
project(MyAwesomeProgram)

set(LIB_HEADERS "list.hpp")
set(LIB_SOURCES "list.cpp")

set(SOURCES "main.cpp")

add_library(MyLib STATIC ${LIB_SOURCES})
target_include_directories(MyLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} MyLib)

option(TESTS_ENABLED "Enable test build" ON)

if (TESTS_ENABLED)
    message("Тести будуть!")
    add_subdirectory(Test)
else()
    message("Тестів не буде!")
endif()

foreach(a ${SOURCES})
    message("Зараз працюємо над файлом: '${a}'")
endforeach()
