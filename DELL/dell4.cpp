//
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int factorial(int n){
    //recursive code
    if(n==1)return 1;
    return n*factorial(n-1);
}
int main()
{   
    cout<<"enter a number :"<<endl;
    int n;
    int flag=0;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1)cout<<"Not a prime number:";
    else{
        int ans=factorial(n);
        cout<<"factorial is:"<<ans;
    } 
return 0;
}