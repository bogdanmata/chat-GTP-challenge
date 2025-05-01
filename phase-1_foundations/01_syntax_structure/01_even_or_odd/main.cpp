// Exercise 1: Even or Odd
// TODO: Read an integer and print whether it's even or odd
#include <iostream>
#include <cstdlib>

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    std::cout << ((number % 2 == 0) ? "even" : "odd") << std::endl;

    return EXIT_SUCCESS;
}
