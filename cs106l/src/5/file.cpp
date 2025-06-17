#include <iostream> 
#include <fstream>

int main() {
    std::ofstream ofs("hello.txt"); 
    if (ofs.is_open()) {
        ofs << "Hello, World!" << "\n"; 
    }
    ofs.close(); 
    ofs << "This will not get written"; 
    ofs.open("hello.txt"); 
    ofs << "this will though! it is open again!"; 
    return 0; 
}