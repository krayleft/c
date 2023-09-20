#include <iostream>

int main() {
    char operation;
    int number1, number2;

    std::cout << "Введите операцию (+, -, *, /, !, ^): ";
    std::cin >> operation;

    std::cout << "Введите первое число: ";
    std::cin >> number1;

    if (operation != '!') {
        std::cout << "Введите второе число: ";
        std::cin >> number2;
    }

    if (operation == '+') {
        std::cout << "Результат: " << number1 + number2 << std::endl;
    } else if (operation == '-') {
        std::cout << "Результат: " << number1 - number2 << std::endl;
    } else if (operation == '*') {
        std::cout << "Результат: " << number1 * number2 << std::endl;
    } else if (operation == '/') {
        if (number2 != 0) {
            std::cout << "Результат: " << number1 / number2 << std::endl;
        } else {
            std::cout << "Ошибка: деление на ноль" << std::endl;
        }
    } else if (operation == '!') {
        int factorial = 1;
        for (int i = 2; i <= number1; ++i) {
            factorial *= i;
        }
        std::cout << "Результат: " << factorial << std::endl;
    } else if (operation == '^') {
        int result = 1;
        for (int i = 1; i <= number2; ++i) {
            result *= number1;
        }
        std::cout << "Результат: " << result << std::endl;
    } else {
        std::cout << "Ошибка: некорректная операция" << std::endl;
    }

    return 0;
}