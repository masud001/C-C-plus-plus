#include <iostream>
using namespace std;
/*
if it is not static variable, then, for every object it will start from 1.
if it is static variable then it will count for all abject of this class.

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
};

int Employee::count; //default value is 0;

int main()
{
    Employee masud, rana, dollar;
    masud.setData();
    masud.setData();
    masud.getData();

    rana.setData();
    rana.getData();

    dollar.setData();
    dollar.setData();
    dollar.setData();
    dollar.getData();

    return 0;
}