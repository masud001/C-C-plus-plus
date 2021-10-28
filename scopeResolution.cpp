#include <iostream>
using namespace std;
int c = 50;
int main()
{
    // :IMPORTANT 💩
    // C++ program to show that we can access a global variable
    // using scope resolution operator :: when there is a local
    // variable with same name
    int a, b, c;
    cin >> a;
    cin >> b;
    c = a + b;
    cout << "local variable : " << c;
    cout << "global variable : " << ::c;
    return 0;
}