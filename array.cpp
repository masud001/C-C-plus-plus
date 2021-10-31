#include <iostream>
using namespace std;

int main()
{
    cout << "this is array :" << endl;
    int marks[] = {30, 35, 40, 50, 80, 90};
    // using manually 👍
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // using for loop 👍;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << marks[i] << endl;
    // }
    // using while loop 👍
    // int i = 0;
    // while (i < 4)
    // {
    //     cout << marks[i] << endl;
    //     i++;
    // }
    // using  do..while loop 👍
    // int i = 0;
    // do
    // {
    //     cout << "Using do..while loop :" << marks[i] << endl;
    //     i++;
    // } while (i < 4);

    // array and pointer 🥇
    // ---------------------
    int *p = marks;
    cout << "the value of " << *p << endl;
    cout << "the value of " << *(p + 1) << endl;
    cout << "the value of " << *(p + 2) << endl;
    cout << "the value of " << *(p + 3) << endl;
    cout << "the value of " << *(p + 4) << endl;
    cout << "the value of " << *(p + 5) << endl;
    return 0;
}