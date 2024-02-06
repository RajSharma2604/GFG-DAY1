//Write a function to find if the given number is a power of 2
//this can be don using bit manipulation
#include<iostream>
using namespace std;
#include<bits/stdc++.h>

//N && N-1 ==0
bool pow2(int n){
    if(n==1)return false;
    while(n){
    if(n==1)return true;
    if(n%2!=0)return false;
    n=n/2;
    }
}
int main()
{   
    int n;
    cout<<"enter a number: "<<endl;
    cin>>n;

    bool ans=pow2(n);
    if(ans){
        cout<<"yes power of two:"<<endl;
    }
    else cout<<"not a power of two:"<<endl;
return 0;
}