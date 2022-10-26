#include <iostream>
using namespace std;

class Train //Add required code
{
private:
    long passengerPhone;
    string passengerName;
    char gender;
    int age;
    double ticketPrice;
public:
    long getPassengerPhone() {
        return passengerPhone;
    }
    string getPassengerName() {
        return passengerName;
    }
    char getGender() {
        return gender;
    }
    int getAge() {
        return age;
    }
    double getTicketPrice() {
        return ticketPrice;
    }
    void setPassengerPhone(long pPhone) {
        passengerPhone=pPhone;
    }
    void setPassengerName(string pName) {
        passengerName=pName;
    }
    void setGender(char pGender) {
        gender=pGender;
    }
    void setAge(int pAge) {
        age=pAge;
    }
    void setTicketPrice(double tPrice) {
        ticketPrice=tPrice;
    }
    double calculateAmount() {
        float disc;

        if (age < 16) {
            disc = 0.5;
        } else if (age >= 60) {
            disc = 0.25;
        } else {
            if (gender == 'F') {
                disc = 0.1;
            }
        }

        double amount = ticketPrice-ticketPrice*disc;
        return amount;
    }
};

int main(){   //DO NOT change the 'main' signature
    Train t;

    long phone;
    string name;
    char gender;
    int age;
    double ticketPrice;
    cout<<"Enter the Passenger phone no : ";
    cin>>phone;
    cout<<"Enter the Passenger name : ";
    cin>>name;
    cout<<"Enter the Passenger Age : ";
    cin>>age;
    cout<<"Enter the Gender(M/F): ";
    cin>>gender;
    cout<<"Enter the Ticket Price: ";
    cin>>ticketPrice;

    t.setPassengerPhone(phone);
    t.setPassengerName(name);
    t.setAge(age);
    t.setGender(gender);
    t.setTicketPrice(ticketPrice);

    double out = t.calculateAmount();
    cout << "Total Amount (In dollars): " << out;

    return 0;
}