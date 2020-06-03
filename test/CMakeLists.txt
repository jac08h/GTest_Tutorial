cmake_minimum_required(VERSION 3.17.1)

set(This GTestExample-Tests)

set(Sources 
    example_tests
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC 
    gtest_main
    GTestExample
)

add_test(
    NAME ${This}
    COMMAND ${This}
)