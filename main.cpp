#include <iostream>

int addNumber(int first_param, int second_param)
{
    return first_param + second_param;
}

int main()
{
    int first_number = 3;
    int second_number = 7;
    std::cout << "The First Number is :" << first_number << std::endl;
    std::cout << "The Second Number is :" << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl;

    sum = addNumber(10, 5);
    std::cout << "Sum : " << sum << std::endl;

    std::cout << "Sum : " << addNumber(10, 10) << std::endl;

    return 0;
}