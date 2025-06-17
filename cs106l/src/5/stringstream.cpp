#include <iostream> 
#include <sstream>

void foo() {
    std::string initial_quote = "Bjarne Stroustrup C make it easy to shoot yourself in the foot"; 

    // std::stringstream ss(initial_quote); 
    std::stringstream ss; 
    ss << initial_quote; 

    // std::cout << "ss: " << ss.str() << std::endl;
    // std::cout << "ss size: " << ss.str().size() << std::endl;
    // std::cout << "ss length: " << ss.str().length() << std::endl;
    // std::cout << "ss empty: " << ss.str().empty() << std::endl;
    // std::cout << "ss good: " << ss.good() << std::endl;
    // std::cout << "ss eof: " << ss.eof() << std::endl;
    // std::cout << "ss fail: " << ss.fail() << std::endl;
    // std::cout << "ss bad: " << ss.bad() << std::endl;
    // std::cout << "ss tellg: " << ss.tellg() << std::endl;
    // std::cout << "ss tellp: " << ss.tellp() << std::endl;
    // std::cout << "ss str: " << ss.str() << std::endl;
    // std::cout << "ss rdbuf: " << ss.rdbuf() << std::endl;

    std::string first; 
    std::string last; 
    std::string language, extracted_quote; 

    ss >> first >> last >> language; 
    std::getline(ss, extracted_quote); 
    std::cout << first << " " << last << " said this: " << language << " " << extracted_quote << std::endl; 
}

int main() {
    foo();
    return 0;
}