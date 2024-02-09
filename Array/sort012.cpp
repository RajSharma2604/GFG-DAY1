//
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void sort012(int *arr,int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid++],arr[low++]);
        }
        else if (arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[high--]);
        }
        
    }
}
int main()
{   
    int arr[]={0,1,2,0,1,2};
    int n=6;
    sort012(arr,n);
    cout << "printing sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
return 0;
}