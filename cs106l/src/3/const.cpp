#include <iostream> 
#include <vector> 

int main() {
    std::vector<int> vec = { 1, 2, 3 };
    const std::vector<int> const_vec = { 1, 2, 3}; 
    std::vector<int>& ref_vec { vec }; 
    const std::vector<int>& const_ref { vec }; 

    vec.push_back(3); 
    // const_vec.push_back(3); 
    ref_vec.push_back(3); 
    // const_ref.push_back(3);

    return 0; 
}