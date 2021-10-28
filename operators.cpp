#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "Operators in  c++" << endl;
    cout << "the following types of operators :" << endl;
    cout << "this is + of : " << a + b << endl;
    cout << "this is - of : " << a - b << endl;
    cout << "this is / of : " << a / b << endl;
    cout << "this is * of : " << a * b << endl;
    cout << "this is a % b of : " << a % b << endl;
    cout << "this is ++ of : " << a++ << endl;
    cout << "this is -- of : " << a-- << endl;
    cout << "this is -- of : " << --a << endl;
    cout << "this is -- of : " << ++a << endl;
    cout << "comparison operator :" << endl;
    cout << "this is a==b is : " << (a == b) << endl;
    cout << "this is a!=b is : " << (a != b) << endl;
    cout << "this is a<=b is : " << (a <= b) << endl;
    cout << "this is a>=b is : " << (a >= b) << endl;
    cout << "this is a>b is : " << (a > b) << endl;
    cout << "this is a<b is : " << (a < b) << endl;
    cout << "logical operators : " << endl;
    cout << "logical operators and : " << ((a == b) && (a > b)) << endl;
    cout << "logical operators OR : " << ((a == b) || (a < b)) << endl;
    cout << "logical operators not : " << !(a == b) << endl;
    return 0;
}