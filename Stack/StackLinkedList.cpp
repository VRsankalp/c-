#include<iostream>
using namespace std ;
class Node{
    public:
    int data ;
    Node *next ;
    Node(int val){
        data = val;
        next=NULL;
    }

};
class Stack{
    Node*top;
    public:
        Stack(){
            top=NULL;
        }
        void push(int val){
            Node*newnode=new Node(val);
            if(top==NULL){
                top=newnode ;
            }
            else {
                newnode->next=top;
                top = newnode;
            }
        }
        void pop (){
           if(top == NULL){
            cout<<"Stack is underflow";
            return;
            
           } 
            Node*temp =top;
            top = top->next;
            delete(temp);
        }
        void peek(){
            if(top == NULL){
            cout<<"Stack is underflow";
            return;
        } 
        cout<<top->data;
     }
        bool isEmpty(){
            return top==NULL;
        }

};
int main(){
    Stack s;
    s.push(12);
    s.push(1);
    s.push(133);
    s.isEmpty();
    s.peek();
    s.pop();
}
