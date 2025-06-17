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
    auto classInfo = getClassInfo();
    std::string className = std::get<0>(classInfo);
    std::string buildingName = std::get<1>(classInfo);
    std::string language = std::get<2>(classInfo);
    std::cout << "Come to " << buildingName << " and join us for " << className << " to learn "
    << language << "!" << std::endl;

    return 0;
}
