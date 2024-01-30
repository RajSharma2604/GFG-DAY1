//basic 
#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class car{
    public:
    string model;
    int year;
    string price;
    
    void start(){
        cout<<"model is:"<<model<<endl;
        cout<<"year is:"<<year<<endl;
        cout<<"price is:"<<price<<endl;
    }
};
int main()
{   
    //creating objects
    //static way
    car c1;
    c1.model="Honda";
    c1.price="8 lakh";
    c1.year=2000;
    c1.start();
return 0;
}