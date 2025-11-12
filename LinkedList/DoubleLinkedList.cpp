#include<iostream>
using namespace std ;
class Node{
    public:
    int data ;
    Node*next;
    Node*pre;

    Node(int val ){
        data = val ;
        next = NULL;
        pre = NULL;
    }
 

    
    
};
class DoubleList{
    public:
    Node*head ,*tail;
    DoubleList(){
        head = tail = NULL;
    }
    void addFront(int val){
        Node*newnode = new Node(val);
        if(head == NULL){
            head = tail =newnode;
        }
        else{
            newnode->next=head;
            head->pre=newnode;
            head = newnode;
        }

    }


    


};