#include<iostream>
using namespace std ;
int main(){
    cout<<"hello "<<endl;
    int a =12 , b = 0 , r = 0 ;
    try{
        if(b==0)
            throw runtime_error("Divison by zero" );//thowing an exception
        r = a/b ;
        cout<<"Divison"<<endl;

    }
    catch(runtime_error &e){
        cout<<"execption \n"<<e.what()<<endl;
    }

}
