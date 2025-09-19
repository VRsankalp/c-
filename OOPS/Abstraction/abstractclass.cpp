#include<iostream>
using namespace std ;
class Shape {
    public :
        Shape(){
            cout<<"shape construtor is called "<<endl;
        }
        virtual void draw() = 0 ;
};
class Circle :public Shape{
    public:
        Circle(){
            cout<<"circle constructor is called "<<endl;
        }
        void draw() override {
            cout<<"Drawing a circle ";
        }


};
int main(){
    Shape * a ;
    Circle  c;
    c.draw();
}
