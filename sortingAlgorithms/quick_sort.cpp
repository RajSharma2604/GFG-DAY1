//
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int quickpart(int *arr,int low,int high){
    int pivot=arr[low];
    int i=low+1,j=high;
    while(i<j){


            //pivot bada to i++
            // arr[j] bada to j--
            //otherwise just swap
            while(arr[i]<=pivot && i<=high-1){
                i++;
            }
            //pointer i is looking for that element which
            // is greater than the pivot element
            while(pivot<arr[j] && j>=low+1){
                j--;
            }
            //if they didnt cross each other
            if(i<j){
                swap(arr[i],arr[j]);
            }

        
    }
    swap(arr[j],pivot);
    return j;
}
void quicksort(int *arr,int low,int high){
    if(low<high)//atleast two element
    {
        int partition=quickpart(arr,low,high);
        quicksort(arr,low,partition-1);
        quicksort(arr,partition+1,high);
    }
}
int main()
{
    int arr[] = {3, 5, 2, 1, 4, 12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(int);
    quicksort(arr, 0,n-1);
    cout << "printing sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}