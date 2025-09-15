#include<iostream>
using namespace std;
 class student{
    private:
        int roll;
        string name ;
    public:
        void setData(int r , string n ){
            roll = r ;
            name = n ;
        }
        void getData(){
            cout<<roll<<"   "<<name;

        }
 
 };
 int main(){
    student s ; 
    s.setData(20 ,"Aman");
    s.getData();

    return 0 ;
 }
