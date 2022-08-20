# CPP BASICS

## Hello world in CPP

```c++
// This brings in the iostream library
#include <iostream>

int main()
{
    std::cout << "Hello world";
    return 0;
}

```

## Comments

It's similar like JavaScript

- `//` Comments out a single line
- `/*..*/` Block Comments out a block of text
- `/*..*/` Block comments can't be nested
- Use comments to document your code.Don't overdo it though.

## Statements & Function

- A statement is a basic unit of computation in a C++ program
- Every C++ program is a collection of statements organized in a certain way to achieve some goal
- Statements end with a semicolon in C++(;)

### Variables

```C++
#include <iostream>

int main()
{
    int first_number = 3;
    int second_number = 7;
    std::cout << "The First Number is :" << first_number << std::endl;
    std::cout << "The Second Number is :" << second_number << std::endl;
    return 0;
}

```

### Defining Function

- C++ Function is like JavaScript's traditional function except the declaring data type

```C++
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

```
