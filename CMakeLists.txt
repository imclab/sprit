cmake_minimum_required(VERSION 2.8)
project(Sprit)

###	Build Options	#######################################################################
option(BUILD_APPS "Build applications" ON)

###	Configuration	#######################################################################
# Compiler Flags
set(CMAKE_CXX_COMPILER_FLAGS ${CMAKE_CXX_COMPILER_FLAGS} -Wall) # Enables all compiler warnings
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -fPIC) # Generate position independent code
set(CMAKE_CXX_FLAGS_DEBUG ${CMAKE_CXX_FLAGS_DEBUG}) 
set(CMAKE_CXX_FLAGS_RELEASE ${CMAKE_CXX_FLAGS_RELEASE})

# Include Directories
include_directories(${CMAKE_SOURCE_DIR}/src)

file(GLOB Sprit_SRC_FILES ${CMAKE_SOURCE_DIR}/src/sprit/*.cpp)

###	Subdirectories	#####################################################################
add_subdirectory(src)

if(BUILD_APPS)
  message(STATUS "Applications enabled")
  add_subdirectory(apps)
endif()
