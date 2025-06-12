project(MyAwesomeProgram_Tests)

enable_testing()

set(SOURCES_TEST "tests.cpp")

foreach(test_src ${SOURCES_TEST})
    get_filename_component(test_name ${test_src} NAME_WE)

    add_executable(${test_name} ${test_src})
    target_include_directories(${test_name} PUBLIC ${CMAKE_SOURCE_DIR})
    target_link_libraries(${test_name} PUBLIC MyLib)

    add_test(NAME ${test_name} COMMAND ${test_name})
endforeach()


