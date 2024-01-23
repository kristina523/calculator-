#include <iostream>
#include <cmath>

double addition(double a, double b) {
    return a + b;
}
double subtraction(double a, double b) {
    return a - b;
}
double multiplication(double a, double b) {
    return a * b;
}
double division(double a, double b) {
    return a / b;
}
double exponentiation(double a, double b) {
    return pow(a, b);
}
double squareRoot(double a) {
    return sqrt(a);
}
double percentage(double a) {
    return a / 100;
}
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int choice;
    double num1, num2 = 0.0;

    do {
        std::cout << "Выберите операцию:" << std::endl;
        std::cout << "1. Сложение" << std::endl;
        std::cout << "2. Вычитание" << std::endl;
        std::cout << "3. Умножение" << std::endl;
        std::cout << "4. Деление" << std::endl;
        std::cout << "5. Возведение в степень" << std::endl;
        std::cout << "6. Квадратный корень" << std::endl;
        std::cout << "7. 1% от числа" << std::endl;
        std::cout << "8. Факториал числа" << std::endl;
        std::cout << "9. Выйти из программы" << std::endl;
        std::cout << "Введите номер операции: ";
        std::cin >> choice;

        if (choice >= 1 && choice <= 9) {
            if (choice == 9) {
                break;
            }

            std::cout << "Введите первое число: ";
            std::cin >> num1;

            if (choice != 6 && choice != 7 && choice != 8) {
                std::cout << "Введите второе число: ";
                std::cin >> num2;
            }

            switch (choice) {
                case 1:
                    std::cout << "Результат: " << addition(num1, num2) << std::endl;
                    break;
                case 2:
                    std::cout << "Результат: " << subtraction(num1, num2) << std::endl;
                    break;
                case 3:
                    std::cout << "Результат: " << multiplication(num1, num2) << std::endl;
                    break;
                case 4:
                    if (num2 != 0) {
                        std::cout << "Результат: " << division(num1, num2) << std::endl;
                    } else {
                        std::cout << "Ошибка: деление на ноль" << std::endl;
                    }
                    break;
                case 5:
                    std::cout << "Результат: " << exponentiation(num1, num2) << std::endl;
                    break;
                case 6:
                    if (num1 >= 0) {
                        std::cout << "Результат: " << squareRoot(num1) << std::endl;
                    } else {
                        std::cout << "Ошибка: нельзя извлечь квадратный корень из отрицательного числа" << std::endl;
                    }
                    break;
                case 7:
                    std::cout << "Результат: " << percentage(num1) << std::endl;
                    break;
                case 8:
                    if (num1 >= 0 && num1 == floor(num1)) {
                        std::cout << "Результат: " << factorial(num1) << std::endl;
                    } else {
                        std::cout << "Ошибка: факториал может быть вычислен только для неотрицательных целых чисел" << std::endl;
                    }
                    break;
            }
        } else {
            std::cout << "Ошибка: неправильный номер операции" << std::endl;
        }

        std::cout << std::endl;
    } while (true);

    return 0;
}

