#include<iostream>
using namespace std;
void change(int &a){
    a = 20 ;
}
int main(){
    // int a = 10 ;
    // change(a);
    // cout<<"the value of a is"<<a<<endl;
    // return 0 ;
    int a = 5 ;
    int *p = &a;
    int**q = &p;
    cout<<*p<<endl;
    cout<<**q<<endl;
    cout<<p<<endl;
    cout<<**q<<endl;
    return 0 ;

}// In dynamic memory the value is uesd drasitiaclly 
 