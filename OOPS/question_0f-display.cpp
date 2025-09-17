#include <iostream>
using namespace std ;
class A {
    public:
        void display(){
            cout<<"hello A";
        }
};
class B:public A {
    public:
        void display(){
            cout<<"hello B";
        }
};
 class C : public A{
    public:
        void display(){
            cout<<"hello C";
        }
};
class D :public B ,public C{
    public:
};
int main(){
    A a ;
    B b ;
    C c ;
    D d ;
    d.B::A::display();
    return 0 ;
}
 
 