#include<iostream>
using namespace std ;
class Complex{
    int real ;
    int img ;

  public:
        Complex(){
            
        }
        Complex(int real , int img ){
            this->real = real ;
            this->img = img ;

        }

        void display(){
            cout<<real<<" "<<img;
        }
        Complex operator + (Complex &c){
            Complex ans ;
            ans.real = real +c.real;
            ans.img = img +c.img;
            return ans ;
        }
};
int main(){
    Complex c1(2,4);
    Complex c2(3,6);
    Complex c3 = c1+c2;
    c3.display();
}