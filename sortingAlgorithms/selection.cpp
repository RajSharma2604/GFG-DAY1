//
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void selection(int *arr, int n)
{   
    for(int i=0;i<5;i++){
        int min=i;//index
        for(int j=i+1;j<5;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(min!=i)swap(arr[min],arr[i]);
    }
}
int main()
{
    int arr[5] = {3, 5, 2, 1, 4};
    int n = 5;
    selection(arr, 5);
    cout<<"printing sorted array:"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}