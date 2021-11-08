#include <iostream>
using namespace std;
class Employee
{
    int salary;
    int id;

public:
    void setId()
    {
        salary = 20000;
        cout << "Enter ID : " << endl;
        cin >> id;
    }
    void getDetails();
};
void Employee::getDetails()
{
    setId();
    cout << "the Employee salary is : " << salary << endl;
    cout << "the Employee id is : " << id << endl;
};
int main()
{
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].getDetails();
    }

    return 0;
}