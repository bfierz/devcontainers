project(CxxExamples LANGUAGES CXX)

add_executable(hello hello.cpp)
target_link_options(hello PRIVATE -static-libgcc -static-libstdc++)

add_executable(pmr pmr.cpp)
target_link_options(pmr PRIVATE -static-libgcc -static-libstdc++)
