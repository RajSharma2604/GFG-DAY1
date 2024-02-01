//
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int modulo(string s, int m)
{
    // code here
    int len = s.length();
   // cout<<"length is:"<<len<<endl;
    int p = 1;
    int num = 0;
    for (int i = len - 1; i >= 0; i--)
    {  // cout<<"i= "<<i<<" num= "<<num<<" p= "<<p<<" s[i]= "<<s[i]<<endl;
        num = num + (s[i]-'0') * p;
        p = p * 2;
       // cout<<"num is :"<<num<<endl;
    }
    int r = num % m;
    return r;
}
int main()
{   
    string s="1001101010";
    int m=7;
    int rem=modulo(s,m);
    cout<<"\nremainder is:"<<rem;
    return 0;
}