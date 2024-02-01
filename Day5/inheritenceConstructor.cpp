//
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Animal {
public:
    Animal() {
        std::cout << "Animal constructor called." << std::endl;
    }

    ~Animal() {
        std::cout << "Animal destructor called." << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        std::cout << "Dog constructor called." << std::endl;
    }

    ~Dog() {
        std::cout << "Dog destructor called." << std::endl;
    }
};

int main() {
    Dog myDog; // Calls Animal constructor, then Dog constructor

    return 0; // Calls Dog destructor, then Animal destructor
}

