#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    static int count;
    int employeeId;
    string employeeName;
    double salary;
    double netSalary;
public:
    void setEmployeeId(int id)
    {
        employeeId=id;
    }
    int getEmployeeId()
    {
        return employeeId;
    }
    void setEmployeeName(string name)
    {
        this->employeeName=name;
    }
    string getEmployeeName()
    {
        return this->employeeName;
    }
    void setSalary(double sal)
    {
        this->salary=sal;
    }
    double getSalary()
    {
        return this->salary;
    }
    void setNetSalary(double netSal)
    {
        this->netSalary=netSal;
    }
    double getNetSalary()
    {
        return this->netSalary;
    }
    void calculateNetSalary(int pfpercentage) {
        this->netSalary = this->salary - this->salary*(float(pfpercentage)/100.0);
    }
    void display() {
        cout << "Id: " << getEmployeeId() << endl;
        cout << "Name: " << getEmployeeName() << endl;
        cout << "Net Salary (In dollars): " << getNetSalary() << endl;
    }
    void getEmployeeDetails() {
        cout << "Enter Name:" << endl;
        cin >> employeeName;
        cout << "Enter Salary (in dollars):" << endl;
        cin >> salary;
    }
    static int generateEmployeeId() {
        return count+=1;
    }
};

int Employee::count = 99;

int main() //DO NOT change the 'main' signature
{
    Employee e;

    e.getEmployeeDetails();

    int pfpercentage, id;
    cout<<"Enter PF percentage:"<<endl;
    cin>>pfpercentage;

    id = e.generateEmployeeId();
    e.setEmployeeId(id);
    e.calculateNetSalary(pfpercentage);
    e.display();

    return 0;
}
