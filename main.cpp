#include <iostream>

/////////// 👉👉👉👉👉 C++ User Input

// int main()
// {
//     int yourAge;
//     std::cout << "Type your age :" << std::endl;
//     std::cin >> yourAge;
//     std::cout << "Your birth year is : " << 2022 - yourAge;
//     return 0;
// }

/////////// 👉👉👉👉👉 C++ Operators

int main()
{
    int x = 3;
    int y = 5;
    x += 3;
    std::cout << x << std::endl;
    std::cout << (x > y) << std::endl;          // Comparison operator
    std::cout << (x > y && x > 7) << std::endl; // Logical Operators
    std::cout << (x > y || x > 7) << std::endl;

    return 0;
}