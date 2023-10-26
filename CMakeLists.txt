cmake_minimum_required(VERSION 3.25)
project(Q2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Q2 main.cpp SimpleNode.cpp SimpleNode.h SimpleGraph.cpp SimpleGraph.h AttributedNode1.cpp AttributedNode1.h AttributedGraph1.cpp AttributedGraph1.h AttributedNode2.cpp AttributedNode2.h AttributedGraph2.cpp AttributedGraph2.h)
