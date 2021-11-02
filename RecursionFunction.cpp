#include <iostream>
using namespace std;

int factorial(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    return x * factorial(x - 1);
}

// step by step calculation of factorial 4
/*

1. factorial(4) = 4* factorial(3)
2. factorial(3) = 4* 3* factorial(2)
3. factorial(2) = 4* 3* 2 factorial(1)
4. factorial(1) = 4* 3* 2* 1;


*/

int main()
{
    cout << "Recursion function : " << endl;
    // recursion using loop
    int a = 4;
    // for (int i = 1; i <= 6; i++)
    // {
    //     a = a * i;
    // }
    // cout << a;

    cout << "the factorial is " << factorial(a) << endl;

    return 0;
}