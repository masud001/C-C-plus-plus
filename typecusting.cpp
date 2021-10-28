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
    return 0;
}