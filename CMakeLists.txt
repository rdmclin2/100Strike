cmake_minimum_required(VERSION 3.3)
project(Hihocoder)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    00_hc_bestRouter.c
    01_hc_mxLovesGame.c
    02_hc_APlusB.c
    03_hc_TrieTree.c
    04_hc_229.c
        05_hc_MagicBox.c
        06_hc_KMP.c 07_hc_01pack.c 08_hc_longestPalindromeSubstring.c  09_hc_tringle.c 10_hc_1051.c 11_hc_1039.c 12_hc_1234.c 13_hc_1227.cpp 14_hc_1143.cpp 15_hc_1043.cpp 16_hc_1061.cpp 17_hc_1082.cpp 18_hc_1152.cpp 19_hc_1149.cpp 20_hc_1049.cpp 21_hc_1094.cpp 22_hc_1186.cpp)

add_executable(Hihocoder ${SOURCE_FILES})