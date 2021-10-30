#include <iostream>
using namespace std;

int main()
{
    cout << "this is pointer : " << endl;
    // ❓ what is  pointer ?
    // 🖐️ pointer is a data-type,which holds address of other data-types.

    int a = 10;
    int *b = &a;
    int **c = &b;
    double f = 10.10;
    double *fp = &f;

    /* 💁  */
    // & = (Address of) Operator.
    cout << "address of variable a is : " << &a << endl;
    cout << "address of (pointer) a is : " << b << endl;
    cout << "address of (pointer of pointer) a is : " << c << endl;
    // * = (value of) de-reference Operator.
    cout << "value of address b is : " << *b << endl;
    // & = (Address of) Operator.
    cout << "address of variable f is : " << &f << endl;
    cout << "address of (pointer) f is : " << fp << endl;
    // * = (value of) de-reference Operator.
    cout << "value of address fp is : " << *fp << endl;

    return 0;
}