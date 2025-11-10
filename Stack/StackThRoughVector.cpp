#include<iostream>
#include<vector>
using namespace std ;
class Stack{
    vector<int> v ;
public:
    void push( int val ){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    void peek(){
        v.back();
    }
    bool isEmpty(){
        return v.size()== 0 ;
    }
    void print(  ){
        for(int i = 0 ; i<v.size();i++){
            cout<<v[i]<<"<-";
        }

    }
};
int main(){
    Stack s ;
    s.push(34);
    s.push(4);
    s.push(43);
    s.push(5);
    s.push(64);
    s.print();

   
}

