#include <iostream> 
#include <math.h>
#include <vector> 

void shift(std::vector<std::pair<int, int>> &nums) {
    for (auto& [num1, num2] : nums) {
        num1++; 
        num2++; 
    }
}

int main() {
    std::vector<std::pair<int, int>> nums = {{1, 2}, {3, 4}, {5, 6}}; 
    shift(nums); 

    for (const auto &num : nums) {
        std::cout << "(" << num.first << ", " << num.second << ") "; 
    }
    std::cout << std::endl; 

    return 0;
}