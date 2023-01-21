#include <bits/stdc++.h>
#define ll long long

using namespace std;

//  👉👉👉👉 Problem 1: Checking sorted array

// Checking sorted array through for...loop approach
bool isSorted(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

// Checking sorted array through Recursion

bool isSortedR(int arr[], int size) // int *arr
{
    // Base Case
    if (size == 0 || size == 1)
        return true;
    // processing
    if (arr[0] > arr[1])
        return false;
    else
    {
        // Recursive Relation
        return isSorted(arr + 1, size - 1);
    }
}

//  👉👉👉👉 Problem 2: Sum of an array

// for...loop approach
int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// Through Recursion
int sumR(int arr[], int size)
{
    //  Base Case
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];
    else
    {
        int sum = 0;
        sumR(arr + 1, size - 1);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 10, 35};

    // cout << isSortedR(arr, 5) << endl;
    cout << "Sum :" << sum(arr, 5) << endl;

    return -1;
}