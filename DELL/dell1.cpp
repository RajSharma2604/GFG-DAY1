//Write a program that asks for user input
// from 5 to 9 then calculates the average
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{   
    cout<<"enter input data from 5 to 9:"<<endl;
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int avg;
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    avg=sum/5;
    cout<<"avg is:"<<avg;
return 0;
}