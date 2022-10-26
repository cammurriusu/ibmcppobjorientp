#include <iostream>
#include <string.h>
using namespace std;

class Company {
    private:
        static string companyName;
        static string address;
        static long int contactNumber;
    public:
        static void displayCompanyDetails() {
            cout << "Company Name:" << getCompanyName() << endl;
            cout << "Address:" << getAddress() << endl;
            cout << "Contact Number:" << getContactNumber() << endl;
        };
        static string getCompanyName()
        {
            return companyName;
        }
        static string getAddress()
        {
            return address;
        }
        static long int getContactNumber()
        {
            return contactNumber;
        }
        static void setCompanyName(string cname)
        {
            companyName=cname;
        }
        static void setAddress(string add)
        {
            address=add;
        }
        static void setContactNumber(long int cnumber)
        {
            contactNumber=cnumber;
        }
};

class Employee {
    private:
        string empName;
        int empId;
        double netSalary;
        Company cObj;
    public:
        void getEmployeeDetails() {
            string name;
            int id;
            double sal;

            cout << "Enter Employee Name:" << endl;
            cin >> name;
            cout << "Enter Employee ID:" << endl;
            cin >> id;
            cout << "Enter Net Salary (In dollars):" << endl;
            cin >> sal;

            setEmpName(name);
            setEmpId(id);
            setNetSalary(sal);
        }
        int calculateBonusPercentage() {
            int bonus;
            if (netSalary > 50000 && netSalary <= 80000) {
                bonus = 5;
            } else if (netSalary > 30000 && netSalary <= 50000) {
                bonus = 10;
            } else if (netSalary > 10000 && netSalary <= 30000) {
                bonus = 15;
            } else {
                bonus = 20;
            }

            return bonus;
        }
        void displayEmployeeDetails() {
            cout << "Employee Name:" << getEmpName() << endl;
            cout << "Employee ID:" << getEmpId() << endl;
            cout << "Employee Net Salary (In dollars):" << getNetSalary() << endl;
            cout << "Employee Bonus Percentage:" << calculateBonusPercentage() << "%" << endl;
        }
        void setEmpName(string name)
        {
            this->empName=name;
        }
        void setEmpId(int id)
        {
            this->empId=id;
        }
        void setNetSalary(double net)
        {
            this->netSalary=net;
        }
        void setCobj(Company c)
        {
            this->cObj=c;
        }
        Company getCobj()
        {
            return this->cObj;
        }
        //include required getter methods
        string getEmpName() {
            return empName;
        }
        int getEmpId() {
            return empId;
        }
        double getNetSalary() {
            return netSalary;
        }
};

string Company::companyName = "TekSoft";
string Company::address = "Los Angeles";
long int Company::contactNumber = 422245673;

int main()  //DO NOT change the 'main' signature
{
    Employee e;
    Company c;
    e.setCobj(c);

    e.getEmployeeDetails();
    e.calculateBonusPercentage();
    Company::displayCompanyDetails();
    e.displayEmployeeDetails();

    return 0;
}
