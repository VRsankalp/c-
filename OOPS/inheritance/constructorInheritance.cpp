#include<iostream>
using namespace std ;
class Base {
    public:
    Base(){
        cout<<"base condtructor is cllled \n ";
    
    }
    ~Base(){
        cout<<"base destructor/n";

    }
};
class Derived :public Base {
    public:
     Derived(){
        cout<<"derived constructor is called\n  ";
    }
    ~Derived(){
        cout<<"derived destructor is called \n";
    }
    
};
int main(){
    Derived obj ;

    return 0 ;
}