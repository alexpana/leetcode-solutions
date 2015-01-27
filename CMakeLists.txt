cmake_minimum_required(VERSION 2.8.4)
project(test)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++1")

set(SOLUTION_FILES
    solutions/binary_tree_inorder_traversal.h
    solutions/binary_tree_preorder_traversal.h
    solutions/climbing_stairs.h
    solutions/linked_list_cycle.h
    solutions/populating_next_right_pointers_in_each_node.h
    solutions/powx_n.h
    solutions/roman_to_integer.h)

set(SOURCE_FILES
    main.cpp)

add_executable(leetcode
    ${SOLUTION_FILES}
    ${SOURCE_FILES})

set(CMAKE_CXX_FLAGS "-std=c++11")