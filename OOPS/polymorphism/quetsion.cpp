 
#include<iostream>
using namespace std ;
class Shape {
    public :
        void virtual findArea(){
            cout<<"the area : is  ";

        }
        void virtual findPerimeter(){
            cout<<"the perimerte is ";
        }
};
class Circle :public Shape{
    int radius ;
    public :
        void findArea(int rad){
            radius = rad;
            cout<<"the area : is  "<<3.14*radius*radius;

        }
        void findPerimeter(int rad){
            radius = rad;
            cout<<"the perimerte is "<<2*314*radius;
        }
};
class Rectangle :public Shape{
    int len ;
    int wid;
    public :
        void findArea(int len , int wid ){
            this->len=len;
            this->wid = wid ;
            cout<<"the area : is  "<<len*wid;

        }
        void virtual findPerimeter(int len , int wid){
              this->len=len;
            this->wid = wid ;
            cout<<"the perimerte is "<<2*(len + wid);
        }


};
void display(){

}
int main(){
    Shape*s;
    Circle c;
    // c.findArea(25);
    // c.findPerimeter(45);
    s = &c;
    s->findArea();

}
