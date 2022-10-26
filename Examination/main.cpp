#include <iostream>
using namespace std;

class Examination
{
protected:
    int passMark=100;
public:
    void setPassMark(int pMark)
    {
        passMark=pMark;
    }
    int getPassMark()
    {
        return passMark;
    }
    void displayResult(int gradePoint)
    {
        if (gradePoint > passMark) {
            cout << "Result: Pass" << endl;
        } else {
            cout << "Result: Fail" << endl;
        }
    }
};

class ScienceExam : public Examination
{
public:
    int  calculateGradePoints(int mark){
        return mark*2;
    }
};

class MathsExam : public Examination
{
public:
    int  calculateGradePoints(int mark){
        return mark*4;
    }
};

int main()
{
    ScienceExam s;
    MathsExam m;

    int smark,mathmark;
    cout<<"Enter the mark in Science:";
    cin>>smark;
    cout<<"Enter the mark in Maths:";
    cin>>mathmark;

    int sgrade = s.calculateGradePoints(smark);
    int mgrade = m.calculateGradePoints(mathmark);

    cout << "Science:" << endl;
    s.displayResult(sgrade);
    cout << "Gradepoints: " << sgrade << endl;

    cout << "Maths:" << endl;
    m.displayResult(mgrade);
    cout << "Gradepoints: " << mgrade << endl;

    return 0;
}
