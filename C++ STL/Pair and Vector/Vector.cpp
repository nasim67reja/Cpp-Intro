#include <iostream>
#include <string>
#include <utility>
using namespace std;
int main()
{
    // The way of define pair
    //  pair (data_type1, data_type2) Pair_name (value1, value2) ;
    // 1/
    pair<string, int> Item1("Pen", 5);
    // 2
    pair<int, int> coor;
    coor.first = 4;
    coor.second = 6;

    // 3
    pair Item2(Item1);
    // 4
    pair<string, int> Item3;
    Item3 = make_pair("Paper", 10);
    Item3 = {"Wood", 10};
    // Note: If not initialized, the first value of the pair gets automatically initialized.

    // cout << Item3.second << endl;

    // cout << coor.second << endl;
    Item1.first = "Pencil";
    // cout << Item2.first << " ";

    // ///////// Members Functions
    // make_part() => already given in up
    // swap

    pair<char, int> Pair1 = make_pair('a', 2);
    pair<char, int> Pair2 = make_pair('b', 3);

    cout << "Before Swaping : " << endl;
    cout << "Pair1 : " << Pair1.first << " " << Pair1.second << endl;
    cout << "Pair2 : " << Pair2.first << " " << Pair2.second << endl;
    Pair1.swap(Pair2);
    cout << "After Swaping : " << endl;
    cout << "Pair1 : " << Pair1.first << " " << Pair1.second << endl;
    cout << "Pair2 : " << Pair2.first << " " << Pair2.second << endl;

    return 0;
}