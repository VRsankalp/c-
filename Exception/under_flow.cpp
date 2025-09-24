#include<iostream>
#include<stdexcept>
using namespace std ;
int main(){
    try{
        double small = 1e-300;
        if(small/1e300==0) throw underflow_error("under occured ");

    }catch(const underflow_error&e){
        cout
    }
}