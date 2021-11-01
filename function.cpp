#include <iostream>
using namespace std;

// function prototype
int sum(int a, int b);
void good(void);

int main()
{

    // 📓 num1 and num2 is a "actual" parameters
    int num1, num2;
    cout << "ENter num1 : " << endl;
    cin >> num1;
    cout << "ENter num2 : " << endl;
    cin >> num2;
    cout << "the sum of : " << sum(num1, num2);
    good();
    return 0;
}

int sum(int a, int b)
{
    // int 'a' and 'b' is a "formal parameters"
    int c = a + b;

    return c;
}

void good()
{
    cout << endl
         << "hello, Good morning" << endl;
}