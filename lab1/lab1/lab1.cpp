#include <iostream>

int main()
{
    int number1; //тризначне число
    std::cout << "Enter the number: "; std::cin >> number1; //введення тризначного числа
    int left = number1 / 100; //визначення лівої цифри
    int number2 = (number1 - left * 100) * 10 + left; //кінцевий результат, переміщення лівої цифри в кінець
    std::cout << "Result: " << number2; //виведення результату
}


