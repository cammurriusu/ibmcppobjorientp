#include <iostream>
using namespace std;

class Heroine
{
protected:
    double earningsPerDay;
public:
    void setEarningsPerDay(double earnings)
    {
        earningsPerDay=earnings;
    }
    double getEarningsPerDay()
    {
        return earningsPerDay;
    }
    long calcEarnings(int noOfDays){
        long totalEarnings = earningsPerDay * noOfDays;
        return totalEarnings;
    }
};

class MovieHeroine : public Heroine
{
private:
    int daysRun;
public:
    void setDaysRun(int daysRun) {
        this->daysRun = daysRun;
    }
    int getDaysRun() {
        return daysRun;
    }
    long calcEarnings(int noOfDays){
        long totalEarnings = earningsPerDay * noOfDays;
        float extraPercentage;

        if (daysRun > 100) {
            extraPercentage = 10;
        } else if (daysRun > 50 && daysRun <= 100) {
            extraPercentage = 5;
        } else {
            extraPercentage = 0;
        }

        totalEarnings += totalEarnings * extraPercentage/100;

        return totalEarnings;
    }
};

class AdvertisementModel : public Heroine
{
private:
    int rating;
public:
    void setRating(int rating) {
        this->rating = rating;
    }
    int getRating() {
        return rating;
    }
    long calcEarnings(int noOfDays){
        long totalEarnings = earningsPerDay * noOfDays;
        long extraAmount;

        if (rating > 5) {
            extraAmount = 10000;
        } else if (rating < 5 && rating > 2) {
            extraAmount = 5000;
        } else {
            extraAmount = 0;
        }

        totalEarnings = (earningsPerDay * noOfDays) + extraAmount;
        return totalEarnings;
    }
};

int main()
{
    MovieHeroine m;
    AdvertisementModel a;

    int movie,ad,rating,daysRun;
    double earningsPerDay;
    cout<<"Enter the earnings per day :"<<endl;
    cin>>earningsPerDay;

    cout<<"Enter the number of days for movie :"<<endl;
    cin>>movie;
    cout<<"Enter the number of days movie run:"<<endl;
    cin>>daysRun;

    cout<<"Enter the number of days for advertisement  :"<<endl;
    cin>>ad;

    cout<<"Enter the Advertisement rating: "<<endl;
    cin>>rating;

    m.setEarningsPerDay(earningsPerDay);
    a.setEarningsPerDay(earningsPerDay);

    m.setDaysRun(daysRun);
    a.setRating(rating);

    cout << "Earnings for the Movie" << m.calcEarnings(movie) << endl;
    cout << "Earnings for the Advertisement: " << a.calcEarnings(ad);

    return 0;
}