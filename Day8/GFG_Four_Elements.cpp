//
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
bool four_elements(int *arr, int n, int X)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = sum + arr[i] + arr[j];
            int k = n - 1;
            int l = j + 1;
            while (l < k)
            {
                sum = sum + arr[k] + arr[l];
                if (sum < X)
                {
                    sum = sum - arr[k];
                    sum = sum - arr[l];
                    l++;
                }
                else if (sum > X)
                {
                    sum = sum - arr[k];
                    sum = sum - arr[l];
                    k--;
                }
                else
                    return true;
            }
            sum = sum - arr[i];
            sum = sum - arr[j];
        }
    }
    return false;
}
int main()
{   
    int arr[]={1,2,3,4,5};
    int n=5;
    int X=14;
    bool ans=four_elements(arr,n,X);
    cout<<"answer is: "<<ans;
    return 0;
}