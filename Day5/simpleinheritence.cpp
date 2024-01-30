//
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// base class
class vehicle
{
private:
    string brand = "ford";

public:
    void honk()
    {
        cout << "vjinervn fkvnernv" << endl;
    }
};

// derived class
class car : public vehicle
{
public:
    string model = "Mustang";
};

int main()
{
    car mycar;
    mycar.honk();
    cout << "model is : " << mycar.model << endl;
    return 0;
}