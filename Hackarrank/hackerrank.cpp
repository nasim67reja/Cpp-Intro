#include <iostream>
#include <string>
using namespace std;

/////// Problem 1 : C++ data type  (https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true)

// int main()
// {
//     // Complete the code.
//     int a;
//     long long int b;
//     char c;
//     float d;
//     double e;
//     scanf("%d %lld %c %f %lf", &a, &b, &c, &d, &e);
//     printf("%d\n%lld\n%c\n%f\n%lf", a, b, c, d, e);
//     // cin >> a >> b >> c >> d >> e;
//     // cout << a << "\n"
//     //      << b << "\n"
//     //      << c << "\n"
//     //      << d << "\n"
//     //      << e << "\n";
//     return 0;
// }

// Problem 2 : Conditional Statements (https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem?isFullScreen=true)

// int main()
// {
//     int num;
//     cin >> num;

// cout << num;

// if (num == 1)
//     cout << "one" << endl;
// else if (num == 2)
//     cout << "two" << endl;
// else if (num == 3)
//     cout << "three" << endl;
// else if (num == 4)
//     cout << "four" << endl;
// else if (num == 5)
//     cout << "five" << endl;
// else if (num == 6)
//     cout << "six" << endl;
// else if (num == 7)
//     cout << "seven" << endl;
// else if (num == 8)
//     cout << "eight" << endl;
// else
//     cout << "Greater than 9" << endl;

// string result = num == 1 ? "one" : (num == 2) ? "two"
//                                : (num == 3)   ? "three"
//                                : (num == 4)   ? "four"
//                                : (num == 5)   ? "five"
//                                : (num == 6)   ? "six"
//                                : (num == 7)   ? "seven"
//                                : (num == 8)   ? "eight"
//                                : (num == 9)   ? "nine"
//                                               : "Greater than 9";
// cout << result << endl;

// return 0;
// }

//// Problem 3 : For Loop (https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true)

// int main()
// {
//     int min, max;
//     string number[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//     cin >> min;
//     cin >> max;
//     for (int i = min; i < max + 1; i++)
//     {
//         if (i < 10)
//             cout << number[i - 1] << endl;
//         else if (i % 2 == 0)
//             cout << "even" << endl;
//         else
//             cout << "odd" << endl;
//     }

//     return 0;
// }

////////////////////////////////////////////
//// 👉👉👉👉 String   👈👈👈
///////////////////////////////////////

// Problem 4: Strings (https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true)

// int main()
// {
//     string str1, str2;
//     cin >> str1;
//     cin >> str2;

//     cout << str1.length() << " " << str2.length() << endl;
//     cout << str1 + str2 << endl;
//     char con = str1[0];
//     str1[0] = str2[0];
//     str2[0] = con;
//     cout << str1 << " " << str2 << endl;

//     return 0;
// }

////////////////////////////////////////////
//// 👉👉👉👉 StringStream   👈👈👈
///////////////////////////////////////
#include <sstream>
// int main()
// {
//     string str;
//     cin >> str;
//     stringstream ss(str);
//     char ch;
//     int a;
//     while (ss >> a)
//     {
//         cout << a << endl;
//     }
//     // cout << a << endl;
//     // cout << b << endl;
//     // cout << c << endl;

//     return 0;
// }

////////////////////////////////////////////
//// 👉👉👉👉 StringStream   👈👈👈

///////////////////////////////////////

// Problem 6 : Array

// int main()
// {
//     size_t n{};
//     cin >> n;
//     int numbers[n]; // creating n length array
//     int m{};
//     for (int i{n - 1}; i >= 0; i--)
//     {
//         // putting given numbers in array with reverse order
//         cin >> m;
//         numbers[i] = m;
//     }
//     for (int i{}; i < n; i++)
//     {
//         // printing array elements with space
//         cout << numbers[i] << " ";
//     }
//     return 0;
// }

////////////////////////////////////////////
//// 👉👉👉👉 Functions   👈👈👈

///////////////////////////////////////

// Problem 7 : Functions
int max_of_four(int num1, int num2, int num3, int num4)
{
    // int numbers[4] = {num1,
    //                   num2,
    //                   num3,
    //                   num4};
    // int max = numbers[0];
    // for (int i = 0; i < 4; i++)
    // {
    //     if (numbers[i] > max)
    //         max = numbers[i];
    // }
    int max = num1;
    if (max < num2)
        max = num2;
    if (max < num3)
        max = num3;
    if (max < num4)
        max = num4;

    return max;
}

int main()
{
    int a, b, c, d;
    cout << "Write the numbers :" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int ans = max_of_four(a, b, c, d);
    cout << "The large number is " << ans << endl;
    return 0;
}