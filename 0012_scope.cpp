#include <iostream>

// int x = 5; // avoid global variables, because of efficiency

int main() {
  {
    int x = 7;
  }

  {
    int x = 42;
  }

    return 0;
}