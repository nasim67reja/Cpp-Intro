#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int el;
        cin >> el;
        v.push_back(el);
    }

    int query;
    cin >> query;
    vector<pair<int, int>> vp;
    for (int i = 0; i < query; i++)
    {

        int to_find;
        cin >> to_find;
        auto lb = lower_bound(v.begin(), v.end(), to_find);
        auto hi = lower_bound(v.begin(), v.end(), to_find + 1);

        int indexl = lb - v.begin();
        int indexH = hi - v.begin();

        if (indexl == 0)
            vp.push_back({0, v[indexH]});
        else if (indexH == n)
            vp.push_back({v[indexl - 1], 0});
        else
            vp.push_back({v[indexl - 1], v[indexH]});
    }

    for (auto val : vp)
    {
        if (val.first == 0)
            cout << "X"
                 << " " << val.second << endl;
        else if (val.second == 0)
            cout << val.first
                 << " "
                 << "X" << endl;
        else
            cout << val.first << " " << val.second << endl;
    }

    return 0;
}

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

// int lower_bound(vector<int> &v, int element)
// {
//     int lo = 0, hi = v.size() - 1;
//     int mid;
//     while (hi - lo > 1)
//     {
//         int mid = (hi + lo) / 2;
//         if (v[mid] < element)
//             lo = mid + 1;
//         else
//             hi = mid;
//     }
//     if (v[lo] >= element)
//         return lo;
//     if (v[hi] >= element)
//         return hi;
//     return -1;
// }

// /////// Upper Bound using binary search
// int upper_bound(vector<int> &v, int element)
// {
//     int lo = 0, hi = v.size() - 1;
//     int mid;
//     while (hi - lo > 1)
//     {
//         int mid = (hi + lo) / 2;
//         if (v[mid] <= element)
//             lo = mid + 1;
//         else
//             hi = mid;
//     }
//     if (v[lo] > element)
//         return lo;
//     if (v[hi] > element)
//         return hi;
//     return -1;
// }

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
//     sort(v.begin(), v.end());

//     int to_find;
//     cin >> to_find;
//     int lb = lower_bound(v, to_find);
//     cout << lb << " " << v[lb] << endl;
//     return 0;
// }

// int findEl(vector<int> &v, int element)
// {
//     int lo = 0, hi = v.size() - 1;
//     int mid;
//     while (hi - lo > 1)
//     {
//         int mid = (hi + lo) / 2;
//         if (v[mid] < element)
//             lo = mid + 1;
//         else
//             hi = mid;
//     }

//     if (v[lo] == element)
//         return lo;
//     else if (v[hi] == element)
//         return hi;
//     else
//         return -1;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int el;
//         cin >> el;
//         v.push_back(el);
//     }
//     sort(v.begin(), v.end());

//     // ////////////
//     vector<pair<int, int>> vp;

//     int query;
//     cin >> query;
//     // cout << query << endl;

//     for (int i = 0; i < query; i++)
//     {
//         int to_find;
//         cin >> to_find;

//         auto upper = upper_bound(v.begin(), v.end(), to_find);
//         int index = upper - v.begin() + 1;
//         int result = findEl(v, to_find);

//         if (result != -1)
//         {
//             if (result == 0)
//             {

//                 vp[i].first = 0;
//                 vp[i].second = v[result + 1];
//             }
//             else if (result == (n - 1))
//             {
//                 vp[i].first = v[result - 1];
//                 vp[i].second = 0;
//             }
//             else
//             {
//                 vp[i].first = v[result - 1];
//                 vp[i].second = v[result + 1];
//             }
//         }

//         if (result == -1)
//         {
//             if (upper != v.end())
//             {
//                 // auto it = find(v.begin(), v.end(), *upper);
//                 // int index = it - v.begin();
//                 if (index == 0)
//                 {
//                     vp[i].first = 0;
//                     vp[i].second = *upper;
//                 }
//                 else
//                 {
//                     vp[i].first = v[index - 1];
//                     vp[i].second = *upper;
//                 }
//             }
//             else
//             {
//                 vp[i].first = v[n - 1];
//                 vp[i].second = 0;
//             }
//         }
//     }

//     for (auto val : vp)
//     {
//         cout << val.first << " " << val.second << endl;
//     }

//     return 0;
// }
