//
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int Fun(int *arr, int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        if (mpp[arr[i]])
        {
            return arr[i];
        }
        else
        {
            mpp[arr[i]] = i;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 3, 2, 1, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);

    int ans = Fun(arr, n);
    cout << "First Repeating Element is :"<<ans;
             return 0;
}