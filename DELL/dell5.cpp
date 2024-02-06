//Write a C++ programme without 
//using any loop {if,for,while etc}
//to print number from 1 to 1-- and 100 to 1
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void print(int n){
    //base case
    if(n==0)return;
    cout<<n<<" ";
    print(n-1);
}
void revprint(int n){
    //base case
    if(n==0)return;
    
    revprint(n-1);
    cout<<n<<" ";
}
int main()
{   
    //so in this code we need to use recursion
    int n=100;
    print(n);
    cout<<endl;
    revprint(n);
return 0;
}