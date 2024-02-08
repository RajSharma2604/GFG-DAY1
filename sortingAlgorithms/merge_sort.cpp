//
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void merge(int *arr,int s,int e){
    //let just assume you got two array
    // 1 3 5 7
    // 2 4 6 8
    //create a dynamic array 
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int [len2];
    //now just copy content
    int mainindex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainindex++];
    }
    mainindex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainindex++];
    }
    //now just apply the logic of merge
    // two sorted array
    int index1=0,index2=0;
    mainindex=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<=second[index2]){
            arr[mainindex++]=first[index1++];
        }
        else{
            arr[mainindex++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[mainindex++]=first[index1++];
    }
     while(index2<len2){
        arr[mainindex++]=second[index2++];
    }

}
void mergesort(int *arr, int s,int e)
{   
    //as this is recursion we need one base case
   
    if(s>=e)return;
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main()
{
    int arr[] = {3, 5, 2, 1, 4, 12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(int);
    mergesort(arr, 0,n-1);
    cout << "printing sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
    return 0;
}