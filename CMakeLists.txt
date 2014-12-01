cmake_minimum_required(VERSION 2.8)
project(Sprit)

###	Build Options	#######################################################################
option(BUILD_EXAMPLES "Build examples" ON)

###	Configuration	#######################################################################
# Compiler Flags
set(CMAKE_CXX_COMPILER_FLAGS ${CMAKE_CXX_COMPILER_FLAGS} -Wall) # Enables all compiler warnings
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -fPIC) # Generate position independent code
set(CMAKE_CXX_FLAGS_DEBUG ${CMAKE_CXX_FLAGS_DEBUG}) 
set(CMAKE_CXX_FLAGS_RELEASE ${CMAKE_CXX_FLAGS_RELEASE})

# Include Directories
include_directories(${CMAKE_SOURCE_DIR}/src)

###	Subdirectories	######################################################################
add_subdirectory(apps)
add_subdirectory(src)

#if(BUILD_EXAMPLES)
#	message(STATUS "Examples enabled")
#	add_subdirectory(examples)
#endif()
