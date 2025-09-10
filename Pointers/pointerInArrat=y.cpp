#include<iostream>
using namespace std ;
int main(){
    int arr[]={11,22,11,33,4,4,5,5};
    int *p = arr;
    cout<<p<<endl;//here the address is print arr[0]; 
    cout<<&arr[0]<<endl;//same as above
    cout<<*arr<<endl;// vlu of arr[0] =-= 11



    return 0 ;
}