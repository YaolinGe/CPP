#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::string message = "Hello, " + name + "!";
    std::cout << message << std::endl;

    // Simple macOS text-to-speech using system() and 'say' command
    std::string command = "say \"" + message + "\"";
    system(command.c_str());

    return 0;
}
