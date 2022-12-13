#include <iostream>
#include <string>
using namespace std;

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

// int main()
// {
//     int x = 3;
//     int y = 5;
//     x += 3;
//     std::cout << x << std::endl;
//     std::cout << (x > y) << std::endl;          // Comparison operator
//     std::cout << (x > y && x > 7) << std::endl; // Logical Operators
//     std::cout << (x > y || x > 7) << std::endl;

//     return 0;
// }

/////////// 👉👉👉👉👉 C++ String

// int main()
// {
//     string firstName = "Nasim";
//     string lastName = "Reja";
//     // cout << firstName + " " + lastName << endl; // Concat string
//     // string fullName = firstName.append(lastName);
//     // cout << fullName << endl;

//     string x = "10";
//     int y = 20;
//     // string z=x+y; // it will not work here
//     // 🖐 String length
//     string txt = "Lasim Reja";
//     // cout << txt.length() << endl; // or txt.size()

//     // 🖐 Change String Characters
//     txt[0] = 'N';
//     // cout << txt << endl;
//     string specialChar = "We are the so-called \" Vikings \" from the \tnorth.";
//     // cout << specialChar << endl;

//     // 🖐 C++ User Input Strings

//     string fullName;
//     cout << "Type Your Fullname here : " << endl;
//     // cin >> fullName;
//     // cout << fullName; // there is a problem if you type Nasim Reja it will give only Nasim the text after space character will not be shown
//     // getline(cin, fullName);
//     // cout << "Your Full Name is : " << fullName << endl;
//     cout << min(5, 10);
//     return 0;
// }

// 👉👉👉 loop, if..else

// int main()
// {
//     int myAge = 0;
//     if (myAge || false)
//     {
//         cout << "You are a Voter !" << endl;
//     }
//     else
//     {
//         cout << "You are not a Voter !" << endl;
//     }

//     //  for loop

//     for (int i = 1; i <= 2; ++i)
//     {
//         cout << "Outer: " << i << "\n"; // Executes 2 times

//         // Inner loop
//         for (int j = 1; j <= 3; ++j)
//         {
//             cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
//         }
//     }

//     return 0;
// }

//  👉👉👉👉 C++ Arrays

// int main()
// {
//     string carsF[3] = {"Tesla", "Lambo", "Roles Royals"};
//     // int myNum[3] = {10, 20, 30}; // array of integars
//     carsF[1] = "Lamborgini";
//     // cout << cars[1] << endl;
//     string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
//     // for (
//     //     int i = 0;
//     //     i < 4;
//     //     i++)
//     // {
//     //     cout << cars[i]
//     //          << "\n";
//     // }
//     // // Alternatives
//     // for (string i : cars)
//     // {
//     //     cout << i << endl;
//     // }

//     // cout << sizeof(cars) / sizeof(string);

//     // // Alternatives
//     // for (int i = 0; i < sizeof(cars) / sizeof(string); i++)
//     // {
//     //     cout << cars[i] << endl;
//     // }

//     // ////// 🖐🖐🖐🖐🖐 Multidimensional Array
//     int number = 2;
//     string letters[2][4] = {
//         {"A", "B", "C", "D"},
//         {"E", "F", "G", "H"}};
//     string lettersA[2][3][2] = {
//         {{"a", "b"}, {"c", "d"}, {"e", "f"}},
//         {{"g", "h"}, {"i", "j"}, {"k", "l"}}};
//     lettersA[0][0][1] = "B"; // changing element in multi-Dimensional array
//                              // cout << lettersA[0][0][1] << endl;
//                              // Looping in multidimensional array
//     // for (int i = 0; i < 2; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         for (int k = 0; k < 2; k++)
//     //         {
//     //             cout << lettersA[i][j][k] << endl;
//     //         }
//     //     }
//     // }

//     return 0;
// }

// int main(){
//     // /////////////// In the following example we use a multi-dimensional array to represent a small game of Battleship:
//     bool ships[4][4] = {
//         {0, 1, 1, 0},
//         {0, 0, 0, 0},
//         {0, 0, 1, 0},
//         {0, 0, 1, 0}};
//     int hits = 0;
//     int numberOfTurns = 0;
//     while (hits < 4)
//     {
//         int row, column;
//         cout << "Give the row number :" << endl;
//         cin >> row;
//         cout << "Give the column number :" << endl;
//         cin >> column;
//         if (ships[row][column])
//         {
//             ships[row][column] = 0;
//             hits++;
//             cout << "Hit ! " << (4 - hits) << " left" << endl;
//         }
//         else
//         {
//             cout << "oops Missed try again" << endl;
//         }

//         numberOfTurns++;
//     }
//     cout << "Victory ✌" << endl;
//     cout << "You have tried " << numberOfTurns << " times" << endl;
//     return 0;
// }
// //////////////// 👉👉👉👉👉👉 C++ Structures
// int main()
// {
//     // rule To create a structure, use the struct keyword and declare each of its members inside curly braces.

//     // After the declaration, specify the name of the structure variable(myStructure in the example below) :

//     struct
//     {
//         int myNum = 2;
//         string myString;
//     } myStructure;
//     // Access Structure Members
//     // To access members of a structure, use the dot syntax (.):
//     //  Assign values to members of myStructure
//     // myStructure.myNum = 1;
//     myStructure.myString = "Hello World!";
//     cout << myStructure.myNum << endl;
//     // cout << myStructure.myString << endl;

//     ///👉👉👉 One Structure in Multiple Variables
//     // struct
//     // {
//     //     string name;
//     //     int cls;
//     //     int age;
//     //     string section;
//     // } student1, student2;

//     // student1.name = "Nasim";
//     // student2.name = "Rohan";

//     // student1.cls = 10;
//     // student2.cls = 10;

//     // student1.age = 16;
//     // student2.age = 16;

//     // student1.section = "Science";
//     // student2.section = "Science";

//     // cout << "The first student is " << student1.name << " and " << student1.name << " reads in class " << student1.cls << " his age is " << student1.age << "and he is in" << student1.section << " section" << endl;

//     // cout << "The second student is " << student2.name << " and " << student2.name << " reads in class " << student2.cls << " his age is " << student2.age << " and he is in" << student2.section << " section" << endl;

//     /////////////////////👇👇👇👇👇 Named Structures

//     struct student
//     {
//         string name;
//         int cls;
//         int age;
//         string section;
//     };

//     student student1;
//     student1.name = "Nasim";
//     student1.cls = 10;
//     student1.age = 16;
//     student1.section = "Science";

//     student student2;
//     student2.name = "Rohan";
//     student2.cls = 10;
//     student2.age = 16;
//     student2.section = "Science";

//     cout << "The first student is " << student1.name << " and " << student1.name << " reads in class " << student1.cls << " his age is " << student1.age << " and he is in" << student1.section << " section" << endl;

//     cout << "The second student is " << student2.name << " and " << student2.name << " reads in class " << student2.cls << " his age is " << student2.age << " and he is in" << student2.section << " section" << endl;

//     return 0;
// }

// C++ References

int main()
{
    string sscResult = "GPA-5.00";
    string &hscResult = sscResult;
    cout << hscResult << endl;
    // for get memory address
    cout << &hscResult << endl;
    return 0;
}