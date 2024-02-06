//
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
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
    else cout<<"Prime number ,need to calculate factroial for it:"<<endl;
return 0;
}