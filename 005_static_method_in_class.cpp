#include <iostream>
using namespace std;
/*
static variable
-----------------
if it is not static variable, then, for every object it will start from 1.
if it is static variable then it will count for all abject of this class.
static method 
------------------
--> static method only access static variable
--> To run static method no need to object reference.
--> class directly access static method  using scope resolution 👍 :: 👍
example: Employee:: getCount()
*/
class Employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout << "Enter id : " << endl;
        cin >> id;
        count++;
    };
    void getData()
    {
        cout << "Employee NO : " << count << endl;
        cout << "id is : " << id << endl;
    };
    // static method
    static void getCount()
    {
        cout << "the count is : " << count << endl;
    }
};

int Employee::count; //default value is 0;

int main()
{
    Employee masud, rana, dollar;

    masud.setData();
    masud.getData();
    Employee::getCount();

    rana.setData();
    rana.getData();
    Employee::getCount();

    dollar.setData();
    dollar.getData();
    Employee::getCount();

    return 0;
}