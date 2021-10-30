#include <iostream>
using namespace std;
// In this code you have to remember about break statement
int main()
{
    cout << "Controll Structure." << endl;
    int age = 17;
    switch (age)
    {
    case 18:
        cout << "Your age 18" << endl;
        break;

    default:
        cout << "not match" << endl;
        break;
    }

    return 0;
}