//
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Student {
private:
    string name;
    int age;

public:
    // Constructor to initialize data members
    //parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Getter methods to access private data members
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main()
{   
    Student s1("raj" ,23);
    cout<<"the age is:"<<s1.getAge()<<endl;
    cout<<"the name is:"<<s1.getName()<<endl;
    cout<<"for student 2:"<<endl;
    Student *s2=new Student("manisha" ,24);
     cout<<"the age is:"<<s2->getAge()<<endl;
    cout<<"the name is:"<<s2->getName()<<endl;


return 0;
}