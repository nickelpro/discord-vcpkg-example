cmake_minimum_required(VERSION 3.31)

include(vcpkg/BootstrapVcpkg.cmake)

project(discord-vcpkg-exmaple VERSION 0.0.1)

find_package(llhttp CONFIG REQUIRED)

add_executable(example)

target_sources(example
  PRIVATE
    src/main.cpp
)

target_link_libraries(example
  PRIVATE
    llhttp::llhttp_static
)

enable_testing()
add_test(NAME example COMMAND example)
