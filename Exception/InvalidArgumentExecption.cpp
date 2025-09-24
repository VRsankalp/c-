#include<iostream>
#include<string>
using namespace std ;
int main(){
    try{
        int x = stoi("abc");//cannot convert into string 
         throw invalid_argument("cannot convert");
        cout<<x<<endl;//here stoi is inbuilt function help to convert the value

    }
    catch(const invalid_argument&e){
        cout<<e.what()<<endl;
    }
    return 0 ;
}
