#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <stdlib.h>

using namespace std;

// Sum Of Cubes
int main()
{
    using std::cout;
    using std::endl;

    int n;
    cin >> n;
    int crt = ceil(cbrt(n));
    vector<int> v;
    for (int i = 0; i < crt; i++)
    {
        v.push_back(i + 1);
    }

    string str = "NO";
    for (int i = 0; i < v.size(); i++)
    {
        auto root = cbrt(n - (v[i] * v[i] * v[i]));
        if (root == ceil(root))
        {
            str = "YES";
            break;
        }
    }
    cout << str << endl;
    return 0;
}

// int upperBound(vector<int> &v, int num)
// {
//     int lo = 0, hi = v.size() - 1, mid;
//     while (hi - lo > 1)
//     {
//         int mid = (hi + lo) / 2;
//         if (v[mid] <= num)
//             lo = mid;
//         else
//             hi = mid;
//     }

//     if (v[lo] > num)
//         return lo;
//     else if (v[hi] > num)
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
//     int to_find;
//     cin >> to_find;
//     int result = upperBound(v, to_find);
//     cout << "The Upper Bound of " << to_find << " is : " << v[result] << endl;
//     return 0;
// }
// //  sqrtroot of int

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         v.push_back(i);
//     }
//     int lo = 0, hi = n - 1;
//     int mid;
//     while (hi - lo > 1)
//     {
//         int mid = (hi + lo) / 2;
//         if (mid * mid < n)
//             lo = mid + 1;
//         else
//             hi = mid;
//     }
//     if (lo * lo == n)
//         cout << "The sqrt root value of " << n << " is : " << lo;
//     else if (hi * hi == n)
//         cout << "The sqrt root value of " << n << " is : " << hi;
//     else
//         cout << "Can't find";
//     return 0;
// }

// //////// 👉👉👉👉👉👉👉 Points in Segments

// int main()
// {
//     int t;
//     cin >> t;
//     vector<vector<int>> v;
//     vector<vector<pair<int, int>>> vp;

//     for (int i = 0; i < t; i++)
//     {
//         int p, s;
//         cin >> p >> s;
//         vector<int> temp;
//         for (int j = 0; j < p; j++)
//         {
//             int n;
//             cin >> n;
//             temp.push_back(n);
//         }
//         v.push_back(temp);

//         vector<pair<int, int>> tempV;
//         for (int j = 0; j < s; j++)
//         {
//             int s1, s2;
//             cin >> s1 >> s2;
//             tempV.push_back({s1, s2});
//         }
//         vp.push_back(tempV);
//     }

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << "Case " << i + 1 << ": " << endl;
//         for (int j = 0; j < vp[i].size(); j++)
//         {
//             auto lbOfHigh = upper_bound(v[i].begin(), v[i].end(), vp[i][j].second);

//             auto lbOfLow = lower_bound(v[i].begin(), v[i].end(), vp[i][j].first);

//             int result = (lbOfHigh - v[i].begin()) - (lbOfLow - v[i].begin());
//             cout << result << endl;
//         }
//     }

//     return 0;
// }

// //////// 👉👉👉👉👉👉👉 The Playboy Chimp
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

//     int query;
//     cin >> query;
//     vector<pair<int, int>> vp;
//     for (int i = 0; i < query; i++)
//     {

//         int to_find;
//         cin >> to_find;
//         auto lb = lower_bound(v.begin(), v.end(), to_find);
//         auto hi = lower_bound(v.begin(), v.end(), to_find + 1);

//         int indexl = lb - v.begin();
//         int indexH = hi - v.begin();

//         if (indexl == 0)
//             vp.push_back({0, v[indexH]});
//         else if (indexH == n)
//             vp.push_back({v[indexl - 1], 0});
//         else
//             vp.push_back({v[indexl - 1], v[indexH]});
//     }

//     for (auto val : vp)
//     {
//         if (val.first == 0)
//             cout << "X"
//                  << " " << val.second << endl;
//         else if (val.second == 0)
//             cout << val.first
//                  << " "
//                  << "X" << endl;
//         else
//             cout << val.first << " " << val.second << endl;
//     }

//     return 0;
// }

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
