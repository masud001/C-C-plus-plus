#include <iostream>
using namespace std;
// 📓 default argument in a function by default when you initializ function
float interest(int a, float increment = 1.04)
{

    return a * increment;
};

int main()
{
    int money = 100000;
    cout << "increment is : " << interest(money) << endl;
    cout << "increment is : " << interest(money, 1.1) << endl;

    return 0;
}