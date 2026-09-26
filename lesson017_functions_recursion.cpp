// compile with: g++ -std=c++17 lesson017_function_recursion.cpp -o lesson017_function_recursion

#include <iostream>

int countdown(int n) {
    if (n <= 0) {
        std::cout << "Countdown complete!" << std::endl;
        return 0; // Base case
    } else {
        std::cout << n << std::endl;
        return countdown(n - 1); // Recursive case
    }
}

int main() {
    countdown(5);
    return 0;
}