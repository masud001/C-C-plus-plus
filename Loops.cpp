#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "this is loops : 🥇 " << endl;
    // for loop 👍
    // for (int i = 0; i <= 40; i++)
    // {
    //     cout << "the number is : " << i << endl;
    // }

    // while loop 👍
    // int i = 10;
    // while (i <= 40)
    // {
    //     cout << "this is : " << i << endl;
    //     i++;
    // }

    // do while loop 👍

    int i = 6;
    int j = 1;
    do
    {
        cout << "this is " << i << " * " << setw(2) << j << " = " << setw(2) << i * j << endl;
        j++;
    } while (j <= 10);

    return 0;
}