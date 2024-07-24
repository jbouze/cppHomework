add_library(myRandom STATIC myRandom.cpp)

target_include_directories(myRandom
    INTERFACE
    $(CMAKE_CURRENT_SOURCE_DIR))
