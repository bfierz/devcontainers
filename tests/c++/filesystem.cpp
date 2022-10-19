// Sample source: https://en.cppreference.com/w/cpp/filesystem/current_path
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;
int main()
{
    std::cout << "Current path is " << fs::current_path() << '\n'; // (1)
    fs::current_path(fs::temp_directory_path()); // (3)
    std::cout << "Current path is " << fs::current_path() << '\n';
}
