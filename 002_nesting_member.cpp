#include <iostream>
using namespace std;

class Employee
{
private:
    int salary;
    int id;
    int nid;
    void salaryAmount();

public:
    void display();
};

void Employee::display()
{
    cout << "Enter salary : " << endl;
    cin >> salary;
    salaryAmount();
}

void Employee::salaryAmount()
{
    cout << "Salary is : 💯 ";
    cout << salary << endl;
};

int main()
{
    Employee masud;
    masud.display();

    return 0;
}