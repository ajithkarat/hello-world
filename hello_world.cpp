#include <iostream>
#include <format>  // C++20: For std::format

int main() {
    // Using std::format to print "Hello, World!"
    std::string greeting = std::format("Hello, {}!", "World");

    std::cout << greeting << std::endl;  // Print the formatted string

    return 0;
}
