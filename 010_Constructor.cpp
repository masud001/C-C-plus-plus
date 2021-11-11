#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    /*
    --> Construnctor is a special member function with the same name
        as of that class.
    --> It is autometically invoked when object is created.
    --> It is used to initialize the object of its class.
    --> they don't have return type.
    --> Default constructor have no parameter.
    --> It should declare in the public section.
    --> It can have default argument.
    --> we can not refer to their address.
*/
    Complex(void); //constructor declaration.
    void printNumb()
    {
        cout << "The Number is : " << a << " + " << b << "i" << endl;
    }
};
Complex::Complex()
{
    a = 0;
    b = 0;
}

int main()
{
    Complex c1, c2, c3;
    c1.printNumb();
    c2.printNumb();
    c3.printNumb();
    return 0;
}