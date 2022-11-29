#include <iostream>
#include <string>
using namespace std;

/////// Problem 1 : C++ data type  (https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true)

int main()
{
    // Complete the code.
    int a;
    long long int b;
    char c;
    float d;
    double e;
    scanf("%d %lld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%lld\n%c\n%f\n%lf", a, b, c, d, e);
    // cin >> a >> b >> c >> d >> e;
    // cout << a << "\n"
    //      << b << "\n"
    //      << c << "\n"
    //      << d << "\n"
    //      << e << "\n";
    return 0;
}