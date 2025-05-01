// Exercise 11: Improved Calculator
// TODO:
// - Read two numbers and an operator (+, -, *, /, %, ^)
// - Validate division/modulo by zero
// - Format result to 2 decimal places
// - Repeat until the user exits

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

int main() {
    char again;
    do {
        double num1, num2;
        char op;

        std::cout << "Enter expression (e.g. 4 + 5): ";
        std::cin >> num1 >> op >> num2;

        double result;
        bool valid = true;

        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 == 0) {
                    std::cout << "Error: Division by zero\n";
                    valid = false;
                } else {
                    result = num1 / num2;
                }
                break;
            case '%':
                if (num2 == 0) {
                    std::cout << "Error: Modulo by zero\n";
                    valid = false;
                } else {
                    result = std::fmod(num1, num2);
                }
                break;
            case '^':
                result = std::pow(num1, num2);
                break;
            default:
                std::cout << "Error: Invalid operator\n";
                valid = false;
        }

        if (valid) {
            std::cout << std::fixed << std::setprecision(2);
            std::cout << "Result: " << result << std::endl;
        }

        std::cout << "Do you want to calculate again? (y/n): ";
        std::cin >> again;
    } while (again == 'y' || again == 'Y');

    return EXIT_SUCCESS;
}
