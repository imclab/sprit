find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(demo demo.cpp ${Sprit_SRC_FILES})
target_link_libraries(demo ${OpenCV_LIBS})
