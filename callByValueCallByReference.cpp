/*
This function is used for show example of
 Call by value and call by reference in c++.
*/
#include <iostream>
using namespace std;

// 📓 this will not swap a and b
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "inside function " << endl;
    cout << "a is : " << a << ", b is : " << b << endl;
}
// call by velue reference usnign pointer
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "inside function " << endl;
    cout << "a is : " << *a << ", b is : " << *b << endl;
}
// call by reference
// int &
void swapRef(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "inside function " << endl;
    cout << "a is : " << a << ", b is : " << b << endl;
    // return a;
}
// 📓 we can return swapped value.
int main()
{
    cout << "this is call by value and call by reference" << endl;
    int x = 10, y = 20;
    cout << "before swap a is : " << x << " and b is: " << y << endl;
    //swap(x, y); // not swap a and b.
    // this one is called 'call by reference '
    //swapPointer(&x, &y); //this will swap x and y.
    //swapRef(x, y) = 200; //this will swap x and y.
    swapRef(x, y); //this will swap x and y.
    // this is code
    cout << "After swap a is : " << x << " and b is: " << y << endl;

    return 0;
}