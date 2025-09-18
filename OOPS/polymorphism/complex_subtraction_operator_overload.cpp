#include<iostream>
using namespace std ;
class Complex{
    int real ;
    int img ; 

    public:
        Complex(){

        }
        void display(){
            cout<<real <<"  "<<img;
        }
        Complex(int real , int img ){
            this->real = real ;
            this->img = img ;
        }
        Complex operator - (Complex&c){
            Complex ans  ;
            ans.real =real - c.real ;
            ans.img = img - c.img ;
            return ans ;

        }


};
int main (){
    Complex c1 (2,5);
    Complex c2 (4,6);
    Complex c3 = c1 - c2 ;
    c3.display();



    return  0;
}