// Exercise 1: Even or Odd
// TODO: Read an integer and print whether it's even or odd
#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    cout << ((number % 2 == 0) ? "even" : "odd") << endl;

    return EXIT_SUCCESS;
}
