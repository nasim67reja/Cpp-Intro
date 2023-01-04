#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
// #include <cmath>

using namespace std;

// Binary search

// int main()
// {
//     int n, el;
//     cin >> n;
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> el;
//         v.push_back(el);
//     }

//     int to_find;
//     cin >> to_find;
//     int lo = 0, hi = n - 1;
//     int mid;
//     while (hi - lo > 1)
//     {
//         int mid = (hi + lo) / 2;
//         if (v[mid] < to_find)
//             lo = mid + 1;
//         else
//             hi = mid;
//     }
//     if (v[lo] == to_find)
//         cout << lo << endl;
//     else if (v[hi] == to_find)
//         cout << hi << endl;
//     else
//         cout << "Not Found" << endl;

//     return 0;
// }

// //// Lower bound using binary search

int lower_bound(vector<int> &v, int element)
{
    int lo = 0, hi = v.size() - 1;
    int mid;
    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (v[mid] < element)
            lo = mid + 1;
        else
            hi = mid;
    }
    if (v[lo] >= element)
        return lo;
    if (v[hi] >= element)
        return hi;
    return -1;
}

// /////// Upper Bound using binary search
int upper_bound(vector<int> &v, int element)
{
    int lo = 0, hi = v.size() - 1;
    int mid;
    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (v[mid] <= element)
            lo = mid + 1;
        else
            hi = mid;
    }
    if (v[lo] > element)
        return lo;
    if (v[hi] > element)
        return hi;
    return -1;
}

int main()
{
    int n, el;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> el;
        v.push_back(el);
    }
    sort(v.begin(), v.end());

    int to_find;
    cin >> to_find;
    int lb = lower_bound(v, to_find);
    cout << lb << " " << v[lb] << endl;
    return 0;
}