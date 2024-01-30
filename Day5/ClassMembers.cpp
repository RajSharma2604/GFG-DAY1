//
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Student {
private:
    string name;
    int age;

public:

    // Getter methods to access private data members
    void setName(string name) {
       cout<<"name is(from inside the class:)"<<name<<endl;
    }

    void setAge(int age);
};
//defining the method outside the class
void Student::setAge(int age){
    cout<<"age is(from outside the class) : "<<age<<endl;
} 

int main()
{       

    Student s1;
    s1.setName("raj sharma");
    s1.setAge(24);
    // Student s1;
    // s1.setAge(24)<<endl;
    // cout<<"the name is:"<<s1.getName()<<endl;
    // cout<<"for student 2:"<<endl;
    // Student *s2=new Student("manisha" ,24);
    //  cout<<"the age is:"<<s2->getAge()<<endl;
    // cout<<"the name is:"<<s2->getName()<<endl;


return 0;
}