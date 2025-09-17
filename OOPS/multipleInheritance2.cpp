#include<iostream>
using namespace std;
class Shape{
    public:
        void draw (){
            cout<<"---------Drawing  shape -------"<<endl;
        }

};
class Circle : public Shape {
    public:
        void area (){
            cout<<"Circle is pie*r*R"<<endl;
        }
};
class Square : public Shape{
        public:
            void area(){
                cout<<"area of square is a*a"<<endl;
            }
};

int main(){
    Circle c ;
    Square s ;
     c.draw();
     c.area();
     s.draw();
     s .area();
     return 0 ;
}