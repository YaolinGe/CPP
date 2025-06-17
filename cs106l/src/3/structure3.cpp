#include <iostream> 
#include <vector> 

std::vector<std::string> getClassInfo() {
    std::string className = "CS106L";
    std::string location = "online";
    std::string language = "C++";
    std::vector<std::string> classVector {"CS106L", "online", "C++"};
    return classVector;
}

int main() {
    auto [className, location, language] = getClassInfo();
    std::cout << "Join us " << location << " for " << className << " to learn " << language << "!" << std::endl;
    return 0;
}