#include <iostream> 
#include <map> 

int main() {
    std::map<std::string, int> ages {
        {"Alice", 25}, 
        {"Bob", 30}, 
        {"Charlie", 35}
    };

    std::cout << "Alice's age: " << ages["Alice"] << std::endl;
    std::cout << "Bob's age: " << ages.at("Bob") << std::endl;

    return 0; 
}