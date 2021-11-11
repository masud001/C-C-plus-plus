#include <iostream>
using namespace std;

// parameterize constructor
class Math
{
    int a, b;

public:
    Math(int, int);
    void printNum()
    {
        cout << "Number is " << a << " + " << b << "i" << endl;
    }
};
Math::Math(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    /*
     Implicit call --> Implicit means done by the JVM or the tool , not the
     Programmer. 
     For Example: Java will provide us default constructor implicitly.Even if the programmer didn't write code for constructor, he can call default constructor.
     Explicit call--> Explicit is opposite to this , ie. programmer has to write.
    */
    // Implicit call
    Math a(10, 20);
    a.printNum();

    // Explicit call
    Math b = Math(100, 200);
    b.printNum();

    return 0;
}