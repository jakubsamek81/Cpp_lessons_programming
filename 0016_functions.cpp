// compile with: g++ -std=c++17 lesson016_functions.cpp -o lesson016_functions

//function is a block of statements that performs a specific task and has assigned name. 
//It can be called from other parts of the program to execute the code within it. Functions help in breaking down complex problems into smaller, manageable pieces, promoting code reusability and modularity.


#include <iostream>

// Function declaration
int add(int a, int b); // Function prototype
float multiply(float x, float y); // Function prototype

int main() {
    int result = add(5, 3);
    std::cout << "The sum is: " << result << std::endl; 
    float product = multiply(4.5f, 2.0f);
    std::cout << "The product is: " << product << std::endl;
    float sum = add(3.5f, 2.5f); // Function overloading example
    std::cout << "The sum of floats is: " << sum << std::endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

// here is an example of a function overloading, where we have two functions with the same name but different parameter types
float add(float x, float y) {
    return x + y;
}

float multiply(float x, float y) {
    return x * y;
}

