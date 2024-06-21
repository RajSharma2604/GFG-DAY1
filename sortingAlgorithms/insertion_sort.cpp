//
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void insertion(int *arr,int n){
    // [ 2|3|4|->push '1']
    for(int i=0;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(key<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[5] = {3, 5, 2, 1, 4};
    int n = 5;
    insertion(arr, 5);
    cout<<"printing sorted array:"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}