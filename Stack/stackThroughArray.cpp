#include<iostream>
using namespace std ;
class Stack{
    int *arr;                            
    int capacity;
    int top ;
    public:
        Stack(int size){
            arr = new int[size];
            capacity=size;
            top = -1 ;

        }
        void push(int val){
          if (top == capacity-1){
            cout<<"stack is full";
          }
            arr[++top]=val;

        }
        void pop(){
            if(top==-1){
                cout<<"stack is under flow";
            }
            
            --top;
           
        } 
        void peek(){
            cout<<top<<"this is the top element ";
        }
        bool isEmpty(){
            return top==-1;
        }
};
int main(){
    Stack s(4);
    s.push(2);
    s.push(3);
    s.push(24);
    s.push(243);

}