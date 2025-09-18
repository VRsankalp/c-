#include<iostream>
using namespace std ;
class Shape {
public:
    virtual void findArea(){
        cout<<"Area of Shape"<<endl;
    } // Pure virtual function
    virtual void findPerimeter(){
        cout<<"Perimeter of Shape"<<endl;
    } // Pure virtual function
};

class Circle : public Shape {
    double radius;
    public:
    Circle(double r){
        radius = r;
    }
    virtual void findArea() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
    double length, width;
    public:
    Rectangle(double l, double w){
        length = l;
        width = w;
    }
    virtual void findArea() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main(){
    Circle c(5);
    Rectangle r(6,2);
    Shape *s1 = &c;
    Shape *s2 = &r;
    s1->findArea();
    s2->findArea();
}