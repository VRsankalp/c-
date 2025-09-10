// 
#include<iostream>
using namespace std;
int main(){
    // int a = 10 ;
    // int*const  p =&a;
    // *p = 50 ;
    // cout<<*p<<endl;
    
    // int a = 10 ;
    // const int * const p = &a;
    // cout<<*p<<endl; //10
    // //*p = 20 Eror"
    int a = 10 ;
    float b = 5.5 ;  
    char c = 'X';
     

    void *ptr ;
    ptr = &a   ;
    cout<<*(int*)ptr;


     




    return 0 ;
}
