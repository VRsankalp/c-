#include <iostream>
using namespace std ;
class Animal{
    public:
    void sound(){
        cout<<" the sound of animal ";
    }
};
class Dog :public Animal{
    public:
        void sound(){
            cout<<"Dog sound ";
        }
};
int main(){
    Animal *a;
    a = new Dog();
    a->sound();
    return 0 ;
}

