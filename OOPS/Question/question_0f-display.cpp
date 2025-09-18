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
class D :public B ,public C , public A {
    public:
};
int main(){
    A a ;
    B b ;
    C c ;
    D d ;
    return 0 ;
}
 
 