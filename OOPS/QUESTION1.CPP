#include<iostream>
using namespace std ;
class Employe{
    private:
        double salary ; 
    public :
    double getSalary(){
        return salary ;
    }
    void setSalary(int salary){
        this->salary=salary;
    }

};
int main(){
    Employe aman;
    aman.setSalary(199999);
    cout<<aman.getSalary()<<endl;
    return 0 ;
}