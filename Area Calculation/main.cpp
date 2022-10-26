#include <iostream>
#include<string>
using namespace std;

class Shape{   //DO NOT change the class name
public:
    double calculateArea();
};

class Circle : public Shape //Add required code
{
private:
    int radius;
public:
    int getRadius() {
        return radius;
    }
    void setRadius(int r) {
        radius = r;
    }
    double calculateArea() {
        return 3.14*radius*radius;
    }
};
class Rectangle : public Shape //Add required code
{
private:
    int width, height;
public:
    int getWidth() {
        return width;
    }
    int getHeight() {
        return height;
    }
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
    double calculateArea() {
        return width*height;
    }
};
class Triangle : public Shape //Add required code
{
private:
    float base, height;
public:
    float getBase() {
        return base;
    }
    float getHeight() {
        return height;
    }
    void setBase(float b) {
        base = b;
    }
    void setHeight(float h) {
        height = h;
    }
    double calculateArea() {
        return .5*base*height;
    }
};



int main()  //DO NOT change the 'main' signature
{
    Circle c;
    Rectangle r;
    Triangle t;

    int radius;
    string shape;
    cout<<"Enter the type of shape:"<<endl;
    cin>>shape;
    double result;

    if(shape.compare("Circle") == 0){
        int radius;
        cout<<"Enter the radius(in cm):"<<endl;
        cin>>radius;
        c.setRadius(radius);
        cout << "The area of the Circle is: " << c.calculateArea() << " square centimeters";
    } else if (shape == "Rectangle") {
        int width, height;
        cout << "Enter the width (in cm):" << endl;
        cin >> width;
        cout << "Enter the height (in cm):" << endl;
        cin >> height;
        r.setWidth(width);
        r.setHeight(height);
        cout << "The area of the Rectangle is: " << r.calculateArea() << " square centimeters";
    } else if (shape == "Triangle") {
        float base, height;
        cout << "Enter the base (in cm):" << endl;
        cin >> base;
        cout << "Enter the height (in cm):" << endl;
        cin >> height;
        t.setBase(base);
        t.setHeight(height);
        cout << "The area of the Triangle is: " << t.calculateArea() << " square centimeters";
    }

    return 0;
}