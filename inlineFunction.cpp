#include <iostream>
using namespace std;
/*
inline---> 📓 (inline) keyword before function defination.
1.not use inline with recursion,static variable.
inline int functionName(){
    
    return 0;
}

*/
// int sum(int a, int b)
// {
//     return a + b;
// }

// 📓 static variable
int sum(int a, int b)
{
    static int c = 0;
    c = c + 1;
    return a * b + c;
}

int main()
{
    cout << "inline function " << endl;
    int a = 4, b = 5;
    cout << "sum of a and b is : " << sum(a, b) << endl;
    cout << "sum of a and b is : " << sum(a, b) << endl;
    cout << "sum of a and b is : " << sum(a, b) << endl;
    cout << "sum of a and b is : " << sum(a, b) << endl;
    cout << "sum of a and b is : " << sum(a, b) << endl;
    return 0;
}