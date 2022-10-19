cmake_minimum_required(VERSION 3.12)
project(CxxExamples LANGUAGES CXX)

add_executable(hello hello.cpp)
target_link_options(hello PRIVATE -static-libgcc -static-libstdc++)

add_executable(features_cxx17 features.cpp)
target_compile_features(features_cxx17 PRIVATE cxx_std_17)
target_link_options(features_cxx17 PRIVATE -static-libgcc -static-libstdc++)

add_executable(fs filesystem.cpp)
target_compile_features(fs PRIVATE cxx_std_17)
target_link_options(fs PRIVATE -static-libgcc -static-libstdc++)

add_executable(pmr pmr.cpp)
target_compile_features(pmr PRIVATE cxx_std_17)
target_link_options(pmr PRIVATE -static-libgcc -static-libstdc++)

add_executable(features_cxx20 features.cpp)
target_compile_features(features_cxx20 PRIVATE cxx_std_20)
target_link_options(features_cxx20 PRIVATE -static-libgcc -static-libstdc++)

add_executable(spaceship spaceship.cpp)
target_compile_features(spaceship PRIVATE cxx_std_20)
target_link_options(spaceship PRIVATE -static-libgcc -static-libstdc++)

add_executable(span span.cpp)
target_compile_features(span PRIVATE cxx_std_20)
target_link_options(span PRIVATE -static-libgcc -static-libstdc++)

add_executable(ranges ranges.cpp)
target_compile_features(ranges PRIVATE cxx_std_20)
target_link_options(ranges PRIVATE -static-libgcc -static-libstdc++)

add_executable(format format.cpp)
target_compile_features(format PRIVATE cxx_std_20)
target_link_options(format PRIVATE -static-libgcc -static-libstdc++)
