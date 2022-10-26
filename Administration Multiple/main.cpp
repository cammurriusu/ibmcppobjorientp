#include <iostream>
using namespace std;

class RuralManagement {
protected:
    int acceptedSchemes;
public:
    int getAcceptedSchemes(){
        return acceptedSchemes;
    }
    void setAcceptedSchemes(int noOfSchemes){
        this->acceptedSchemes=noOfSchemes;
    }
    void calcNoOfSchemes(int noOfSchemes,int noOfSchemesRejected){
        acceptedSchemes = noOfSchemes - noOfSchemesRejected;
    }
};

class RevenueManagement
{
protected:
    double totalRevenue;
public:
    double getTotalRevenue(){
        return totalRevenue;
    }
    void setTotalRevenue(double revenue){
        this->totalRevenue=revenue;
    }
    void calcTotalRevenue(int noOfTerritoriess,double revenue){
        totalRevenue = noOfTerritoriess * revenue;
    }
};

class SchemeManagement : public RevenueManagement, public RuralManagement
{
public:
    double allotMoneyPerScheme(){
        return totalRevenue/acceptedSchemes;
    }
};

int main()
{
    SchemeManagement s;

    int rejected,schemes,territories;
    double revenue;
    cout<<"Enter number of territories :"<<endl;
    cin>>territories;
    cout<<"Enter revenue :"<<endl;
    cin>>revenue;
    cout<<"Enter total number of schemes :"<<endl;
    cin>>schemes;
    cout<<"Enter number of schemes rejected :"<<endl;
    cin>>rejected;

    s.calcNoOfSchemes(schemes, rejected);
    s.calcTotalRevenue(territories, revenue);

    cout << "Money allotted per scheme: " << s.allotMoneyPerScheme();

    return 0;
}
