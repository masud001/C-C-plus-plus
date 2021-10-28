#include <iostream>
using namespace std;

int main()
{
    float a = 34.4f;
    long double b = 34.4L;
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(34.33f) << endl;
    cout << sizeof(34.33F) << endl;
    cout << sizeof(34.33l) << endl;
    cout << sizeof(34.33L) << endl;

    // refernce variable
    int x = 200;
    int &y = x;
    cout << x << endl;
    cout << y << endl;

    // typecusting variable

    int m = 100;
    cout << "type casting of " << (float)m;

    return 0;
}