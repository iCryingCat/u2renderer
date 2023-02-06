cmake_minimum_required (VERSION 3.8)

project (U2Renderer)

add_executable (U2Renderer "main.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET U2Renderer PROPERTY CXX_STANDARD 20)
endif()

set(ENGINE_ROOT_DIR "${CMAKE_CURRENT_SOURCE_DIR}")

add_subdirectory(engine)

target_link_libraries(U2Renderer EngineCore)