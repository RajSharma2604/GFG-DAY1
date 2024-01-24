//
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void insertAtBottom(stack<int> &s,int num){
    if(s.size()==0){
        s.push(num);
        return;
    }
    int ele=s.top();
    s.pop();
    insertAtBottom(s,num);
    s.push(ele);
}
void Reverse(stack<int> &s){
    //base case
    if(s.size()==0)return;
    int num=s.top();
    s.pop();
    Reverse(s);
    insertAtBottom(s,num);
}
int main(){   
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"Current stack is:"<<endl;
    cout<<"5 4 3 2 1 \nfrom top to botton"<<endl;
    Reverse(s);
    cout<<"printing stack after reverse:"<<endl;
    while(s.size()!=0){
        cout<<s.top()<<" ";
        s.pop();
    }


return 0;
}