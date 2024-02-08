//
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void bubble(int *arr, int n)
{   
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1);j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    int arr[5] = {3, 5, 2, 1, 4};
    int n = 5;
    bubble(arr, 5);
    cout << "printing sorted array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}