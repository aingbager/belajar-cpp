cmake_minimum_required(VERSION 3.10)
project(CameraApp)

find_package(OpenCV REQUIRED)
find_package(VTK REQUIRED)

add_executable(camera camera.cpp)
target_link_libraries(camera ${OpenCV_LIBS} ${VTK_LIBRARIES})
