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

int main()
{
    string firstName = "Nasim";
    string lastName = "Reja";
    // cout << firstName + " " + lastName << endl; // Concat string
    // string fullName = firstName.append(lastName);
    // cout << fullName << endl;

    string x = "10";
    int y = 20;
    // string z=x+y; // it will not work here
    // 🖐 String length
    string txt = "Lasim Reja";
    // cout << txt.length() << endl; // or txt.size()

    // 🖐 Change String Characters
    txt[0] = 'N';
    // cout << txt << endl;
    string specialChar = "We are the so-called \" Vikings \" from the \tnorth.";
    // cout << specialChar << endl;

    // 🖐 C++ User Input Strings

    string fullName;
    cout << "Type Your Fullname here : " << endl;
    // cin >> fullName;
    // cout << fullName; // there is a problem if you type Nasim Reja it will give only Nasim the text after space character will not be shown
    getline(cin, fullName);
    cout << "Your Full Name is : " << fullName << endl;
    return 0;
}
