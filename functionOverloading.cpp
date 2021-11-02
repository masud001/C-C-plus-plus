#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int x = 10,
        y = 20,
        z = 30;
    cout << "function overloading : " << endl;
    cout << "function overloading 2 numbers is : " << sum(x, z) << endl;
    cout << "function overloading 3 numbers is : " << sum(x, y, z) << endl;
    return 0;
}