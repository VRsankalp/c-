#include<iostream>
using namespace std ;
int main(){
    int A , B ,C ;
    char S ,q;
    cin>>A>>S>>B>>q>>C;
    if(S=='+'){
        if((A+B)==C)
        cout<<"Yes";
        else{
            cout<<A+B;
        }
    }
     if(S=='-'){
        if((A-B)==C)
        cout<<"Yes";
        else{
            cout<<A-B;
        }
    }
     if(S=='*'){
        if((A*B)==C)
        cout<<"Yes";
        else{
            cout<<A*B;
        }
    }
}