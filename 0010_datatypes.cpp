// compile with: g++ -std=c++17 lesson10_datatypes.cpp -o lesson10_datatypes

// compile with: g++ -Wall-std=c++17 lesson10_datatypes.cpp -o lesson10_datatypes
//parameter -Wall: enables all compiler's warning messages

#include <iostream>

int main() {
    std::cout << "Data Types Lesson 10" << std::endl;

    int x = 25;
    //float x = 5.9f;
    //double x = 50000.50;
    //char x = 'A';
    //char x = 'abc'; // Error: too many characters in character constant
    //const char* x = "Hello, World!"; // String literal
    //bool x = true;
    //int64_t largeNumber = 123456789012345;
    //char x[] = "John Doe";
      

    std::cout << "x: " << x << std::endl;
    std::cout << "Size of int: " << sizeof(x) << " bytes" << std::endl;

    return 0;
}