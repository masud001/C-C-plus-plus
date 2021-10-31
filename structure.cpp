#include <iostream>
using namespace std;

typedef struct person
{
    int age;
    char fedChar;
    float salary;
} mk;

union money
{
    int rice;
    char car;
    float salary;
};

int main()
{

    /*📓 In C++, a structure is a user-defined data type. The structure creates a data type for grouping items of different data types under a single data type. For example: Suppose you need to store information about someone, their name, citizenship, and age. You can create variables like name, citizenship, and age to store the data separately.
    */

    // struct 👍
    // mk p;
    mk *po;
    // p.age = 30;
    // p.fedChar = 'm';
    // p.salary = 100.20;
    cout << po << endl;
    // union 👍
    union money m1;
    m1.rice = 30;
    // cout << m1.rice << endl;

    enum meal
    {
        breakfast,
        dinner,
        lunch
    };

    meal me1 = lunch;
    cout << "meal : " << me1 << endl;

    cout << breakfast << endl;
    cout << dinner << endl;
    cout << lunch << endl;

    return 0;
}