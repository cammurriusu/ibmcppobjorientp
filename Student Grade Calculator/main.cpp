#include <iostream>
using namespace std;
class College
{
private:
    static string principal_name;  // principal_name is common for all the students
public:
    static void setPrincipalName(string name)
    {
        principal_name=name;
    }
    static string getPrincipalName()
    {
        return principal_name;
    }
};
//Initialize the static principal_name variable with value "John" here
string College::principal_name = "John";

class Student
{
private:
    int id;
    string name;
    float marks[5];
    float average;
    char grade;
    College cObj;
public:
    void getStudentDetails()
    {
        cout << "Enter Student ID : " << endl;
        cin >> id;
        cout << "Enter Student Name : " << endl;
        cin >> name;
        cout << "Enter the five subject marks : " << endl;
        for(int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }
    float calculateAverage()
    {
        int sum = 0;
        for (int i=0; i < 5; i++) {
            sum += marks[i];
        }
        average = sum/5;
        return average;
    }
    char findGrade() {
        if (average <= 100 && average >= 80)
            grade = 'O';
        else if (average < 80 && average >= 50)
            grade = 'A';
        else grade = 'F';

        return grade;
    }
    void displayStudentDetails()
    {
        cout << "Student Name : " << name << endl;
        cout << "Student ID : " << id << endl;
        cout << "Principal Name : " << cObj.getPrincipalName() << endl;
        cout << "Average : " << calculateAverage() << endl;
        cout << "Grade : " << findGrade() << endl;
    }
    void setId(int id)
    {
        this->id=id;
    }
    int getId()
    {
        return id;
    }
    void setAverage(float average)
    {
        this->average=average;
    }
    int getAverage()
    {
        return average;
    }
    void setName(string n)
    {
        this->name=n;
    }
    string getName()
    {
        return name;
    }
    void setMarks(float m[])
    {
        for(int i=0; i<5;i++)
            this->marks[i]=m[i];
    }
    float* getMarks()
    {
        return marks;
    }
    void setGrade(char g)
    {
        grade=g;
    }
    char getGrade()
    {
        return grade;
    }
    College getCollegeObject()
    {
        return cObj;
    }
};
int main()  //DO NOT change the 'main' signature
{
    Student s;

    s.getStudentDetails();
    s.displayStudentDetails();

    return 0;
}