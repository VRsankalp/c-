#include<iostream>
using namespace std;
class Bank {
    private :
        double balance ;
    
    public :
        Bank(double initial_balance = 0 ){
            balance = initial_balance;

        }
    void deposite (double amount){
        balance+=amount;
    }
    void withdraw(double amount){
        if(balance>=amount){
            balance-=amount;
            cout<<"WITHDRWA AMOUT "<<amount<<endl;

        }
        else {
            cout<<"insuffiencent balance ";
        }
        double getBalance(){
            return balance ;
        }
    }

};
int main(){
    Bank Account (1000);
    cout<<"Initial balance "<<Account.getBalance()<<endl;
    Account.withdraw(100);
    Account.deposite(2000);
}