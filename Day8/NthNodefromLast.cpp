//Two question can be asked
//getNthfrom last
//delete Nth from last
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           //edge case
           if(n==0)return -1;
           Node *p=head;
           int count=0;
           while(p)
           {
               p=p->next;
               count++;
           }
           if(count<n)return -1;
           int k=count-n;
           p=head;
           while(k--)
           {
               p=p->next;
           }
           return p->data;
    }
int main()
{
return 0;
}