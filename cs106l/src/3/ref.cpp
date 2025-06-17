#include <iostream> 
#include <math.h> 

void squareN(int& n) {
    n = std::pow(n, 2); 
}

int main() {
    int num = 5; 
    int& ref = num; 
    squareN(ref);
    std::cout << "After squaring, num: " << num << std::endl;
    std::cout << "After squaring, ref: " << ref << std::endl;

    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Address of ref: " << &ref << std::endl;
    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Value of ref: " << ref << std::endl;

    ref = 10; 
    std::cout << num << std::endl;

    return 0; 
}
