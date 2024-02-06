//
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void fun(char *c){
    cout<<*c<<endl;
    c++;
     cout<<*c<<endl;
}
int main()
{   
    char str[50]="rajsharma";
    fun(str);

return 0;
}