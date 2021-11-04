#include <iostream>
using namespace std;
// NOTE: this is example of class in c++;
// public and private in class in c++;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int num1, int num2, int num3);
    void getData()
    {
        cout << "this is value of a " << a << endl;
        cout << "this is value of b " << b << endl;
        cout << "this is value of c " << c << endl;
        cout << "this is value of d " << d << endl;
        cout << "this is value of e " << e << endl;
    };
};

void Employee ::setData(int num1, int num2, int num3)
{
    a = num1;
    b = num2;
    c = num3;
};

int main()
{
    Employee masud;
    masud.d = 30;
    masud.e = 20;
    masud.setData(50, 60, 70);
    masud.getData();
    Employee Rana;
    Rana.d = 005;
    Rana.e = 0004;
    Rana.setData(1, 2, 3);
    Rana.getData();

    return 0;
}