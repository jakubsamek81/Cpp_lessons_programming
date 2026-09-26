// compile with: g++ -std=c++17 lesson15_continue_break.cpp -o lesson15_continue_break

#include    <iostream>

int main() {
    std::cout << "Lesson 15: Continue and Break" << std::endl;

    for (int i = 1; i <= 10; ++i) {  // continue and break statements refers to the condition of the loop
        if (i == 5) {
            std::cout << "Skipping number: " << i << std::endl;
            continue; // Skip the rest of the loop when i is 5
        }
        if (i == 8) {
            std::cout << "Breaking the loop at number: " << i << std::endl;
            break; // Exit the loop when i is 8
        }
        std::cout << "Current number: " << i << std::endl;
    }

    return 0;
}