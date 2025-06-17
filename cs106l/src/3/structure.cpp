#include <iostream> 
#include <tuple> 
#include <string> 

std::tuple<std::string, std::string, std::string> getClassInfo() {
    std::string className = "CS106L"; 
    std::string buildingName = "206-113"; 
    std::string language = "C++"; 
    return {className, buildingName, language}; 
}

int main() {
    auto [className, buildingName, language] = getClassInfo(); 
    std::cout << "Come to " << buildingName << " and join us for " << className << " to learn "
    << language << "!" << std::endl;

    return 0;
}
