#include <iostream>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Error: Division by zero!\n";
        return 0;
    }
}

int main() {
    char choice;
    do {
        double num1, num2;
        std::cout << "Enter first number: ";
        std::cin >> num1;

        std::cout << "Enter second number: ";
        std::cin >> num2;

        std::cout << "Choose operation (+, -, *, /): ";
        std::cin >> choice;

        switch (choice) {
            case '+':
                std::cout << num1 << " + " << num2 << " = " << add(num1, num2) << std::endl;
                break;
            case '-':
                std::cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << std::endl;
                break;
            case '*':
                std::cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << std::endl;
                break;
            case '/':
                std::cout << num1 << " / " << num2 << " = " << divide(num1, num2) << std::endl;
                break;
            default:
                std::cerr << "Error: Invalid operation!\n";
        }

        std::cout << "Do you want to perform another calculation? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Calculator is closing. Goodbye!\n";

    return 0;
}
