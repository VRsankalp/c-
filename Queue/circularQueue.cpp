#include<iostream>
using namespace  std ;
class Queue{
    int *arr;
    int front;
    int rear;
    int capacity;

    public:
    Queue(int size ){
        arr=new int[size];
        capacity= size;
        rear = front = -1;
    }
    void push(int val ){
        if((rear+1) % capacity ==front){
            cout<<"Queue is Full";
            return;

        }
        else if (front==rear == -1 ){
            
        }
    }
};