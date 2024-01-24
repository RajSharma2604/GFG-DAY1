//
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int B_search(int *arr,int size,int key){
    int s=0;
    int e=size-1;
    int mid;
    while(s<=e){
         mid=s+(e-s)/2;
        if(arr[mid]==key)return mid;
        else if(arr[mid]>key)e=mid-1;
        else s=mid+1;
       
    }
    return -1;
}
int main()
{   
    //driver code
    int arr[]={2,5,7,11,23,32,45,56,76,99};
    int n=10;
    int key;
    cout<<"Enter the key:"<<endl;
    cin>>key;
    int index=B_search(arr,n,key);
    cout<<"Index for key is : "<<index;
return 0;
}