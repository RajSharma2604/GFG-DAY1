// Write a programme to Exchange two number
// without using a temporary variable
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    // as we can not use third varaible
    int a = 3;
    int b = 5;
    cout << "a is : " << a << " b is: " << b << endl;
    a = a + b; // 8
    b = a - b; // 3
    a = a - b; // 8-3=5
    cout << "after swapping :" << endl;
    cout << "a is : " << a << " b is: " << b << endl;
    return 0;
}