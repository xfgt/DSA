cmake_minimum_required(VERSION 3.31)
project(DSA)


set(CMAKE_CXX_STANDARD 11) # run .\DSA\getCPPVersion.cpp
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(MyAlgorithmProgram)
target_sources(MyAlgorithmProgram
	PRIVATE
	 "getCPPVersion.cpp"
)


if(MSVC)
    target_compile_options(MyAlgorithmProgram PRIVATE "/Zc:__cplusplus") # https://learn.microsoft.com/en-us/cpp/build/reference/zc-cplusplus?view=msvc-170
endif()