#include <iostream>
using namespace std;
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumACalculator(Complex, Complex);
    int sumBCalculator(Complex, Complex);
};

class Complex
{
    int a, b;
    // friend as a member-function on Calculator;
    // friend int Calculator::sumACalculator(Complex o1, Complex o2);
    // friend int Calculator::sumBCalculator(Complex o1, Complex o2);

    // friend class all (class as a friend)
    friend class Calculator;

public:
    void
    setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumebr()
    {
        cout << "the complex number is : " << a << " + " << b << "i" << endl;
    }
};
int Calculator ::sumACalculator(Complex o1, Complex o2)
{
    return o1.a + o2.a;
};
int Calculator ::sumBCalculator(Complex o1, Complex o2)
{
    return o1.b + o2.b;
};
int main()
{

    Complex c1, c2;
    c1.setNumber(1, 4);
    c2.setNumber(5, 7);
    Calculator sum;
    int resultA = sum.sumACalculator(c1, c2);
    int resultB = sum.sumACalculator(c1, c2);
    cout << "result A: " << resultA << endl;
    cout << "result B: " << resultB << endl;

    return 0;
}