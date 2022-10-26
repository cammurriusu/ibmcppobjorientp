#include <iostream>
using namespace std;

class Employee {
private:
    int empId;
    int salary;
    Employee (int id,int sal)
    {
        empId=id;
        salary=sal;
    }
    double calculatePay(int incentive);
};
double Employee::calculatePay(int incentive)
{
    return salary + incentive;
}
int main()
{
    Employee e(1,34000);
    cout<<e.calculatePay(4500);
}
