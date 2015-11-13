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
        06_hc_KMP.c 07_hc_01pack.c 08_hc_longestPalindromeSubstring.c  09_hc_tringle.c)

add_executable(Hihocoder ${SOURCE_FILES})