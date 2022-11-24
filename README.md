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

### C++ Variables

Variables are containers for storing data values.

- int - stores integers (whole numbers), without decimals, such as 123 or -123

- double - stores floating point numbers, with decimals, such as 19.99 or -19.99

- char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes

- string - stores text, such as "Hello World". String values are surrounded by double quotes

- bool - stores values with two states: true or false

Syntax

`type variableName = value;`

### C++ Declare Multiple Variables

To declare more than one variable of the same type, use a comma-separated list:
`int x = 5, y = 6, z = 50;`

### C++ Identifiers

All C++ variables must be identified with unique names. These unique names are called identifiers.

### C++ Constants

When you do not want others (or yourself) to override existing variable values, use the const
keyword (this will declare the variable as "constant", which means unchangeable and read-only):
`const int myNum = 15; // myNum will always be 15`

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

### Input

```c++
#include <iostream>

int main()
{
    int x, y;
    std::cout << "Type The first Number : ";
    std::cin >> x;
    std::cout << "Type The second Number : ";
    std::cin >> y;
    std::cout << "sum of two Number is : " << x + y << std::endl;
    std::cout << "Wow Nasim! You are doing great with C++";
    return 0;
}
```
