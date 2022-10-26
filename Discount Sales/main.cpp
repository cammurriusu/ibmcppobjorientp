#include <iostream>
using namespace std;

class Product
{
protected:
    int markedPrice=1000;
    int discount=40;
public:
    void setMarkedPrice(int mPrice)
    {
        markedPrice=mPrice;
    }
    void setDiscount(int dis)
    {
        discount=dis;
    }
    int getMarkedPrice()
    {
        return markedPrice;
    }
    int getDiscount()
    {
        return discount;
    }
};

class Dress : public Product
{
public:
    char findSize(int chestSize){
        char size;

        if (chestSize >= 20 && chestSize <= 30) {
            size = 'S';
        } else if (chestSize >= 31 && chestSize <= 40) {
            size = 'M';
        } else if (chestSize > 40) {
            size = 'L';
        }

        return size;
    }
};
class Shirt : public Dress
{
public:
    int calculatePrice(char chestSize){
        markedPrice -= (markedPrice * discount) / 100;

        if (chestSize == 'M') {
            markedPrice += 500;
        } else if (chestSize == 'L') {
            markedPrice += 1000;
        }

        return markedPrice;
    }
};

int main()
{
    Shirt s;

    int size;
    cout<<"Enter the chest size : ";
    cin>>size;

    char l = s.findSize(size);

    cout << "Dress size : " << l << endl;
    cout << "Price (in $) : " << s.calculatePrice(l) << endl;

    return 0;
}
