#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    };
    friend double distance(Point, Point);
    void printNumber()
    {
        cout << "x = " << x << " y = " << y << endl;
    }
};

double distance(Point p1, Point p2)
{
    double res = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    return res;
};

int main()
{
    Point p1(1, 1);
    Point p2(1, 1);

    p1.printNumber();
    p2.printNumber();
    double result = distance(p1, p2);
    cout << "result is : " << result;
    return 0;
}