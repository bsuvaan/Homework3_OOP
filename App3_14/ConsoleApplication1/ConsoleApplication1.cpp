// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Задание 3.14 (стр 248)

#include <iostream>
#include <stdio.h>
#include <math.h>

int RoundToInteger(float number)
{
    return floor(number);
}

double RoundToTenths(float number)
{
    return floor(number * 10 + .5) / 10;
}

double RoundToHundredths(float number)
{
    return floor(number * 100 + .5) / 100;
}


double RoundToThousandths(float number)
{
    return floor(number * 1000 + .5) / 1000;
}


int main()
{
    double number;
    std::cout << "Enter the number:";
    std::cin >> number;
    std::cout << "RoundToInteger: " << RoundToInteger(number) << std::endl;
    std::cout << "RoundToTenths: " << RoundToTenths(number) << std::endl;
    std::cout << "RoundToHundredths: " << RoundToHundredths(number) << std::endl;
    std::cout << "RoundToThousandths: " << RoundToThousandths(number) << std::endl;
}

