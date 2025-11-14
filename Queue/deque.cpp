#include<iostream>
using namespace std ;
class Deque{
    int *arr;
    int front;
    int rear;
    int size ;
    public:
    
    Deque(int size){
        arr = new int[size];
        this->size=size;
        front = rear = -1;
        
    }
    bool isFull(){
        return (front==0 && rear == size-1 || front == rear+1);
    }
    bool isEmpty(){
        return (front==-1 && rear==-1);
    }
    void pushFront(int val ){
        if(isFull()){
            cout<<"Deque is Full"<<endl;
            return ;
        }
        if(front==-1){
            front=rear=0;
        }else if(front==0){
            front=size-1;
        }else{
            front--;
        }
        arr[front]=val;

    }
    void pushBack(int val){
        if(isFull()){
            cout<<"Deque is Full"<<endl;
            return ;
        }
        if(rear==-1){
            front=rear=0;
        }else if(rear==size-1){
            rear = 0 ;
        }else{
            rear++;
        }
        arr[rear]=val;
    }
    void print(){
        int temp  = front;
        while(temp!=rear){
            cout<<arr[temp]<<" ";
            temp=(temp+1)%size;
        }
        cout<<arr[temp]<<" ";
    }
};
int main(){
    Deque q(7) ;
    q.pushBack(34);
    q.pushBack(23);
    q.pushBack(67);
    q.pushBack(35);
    q.pushFront(67);
    q.pushFront(97);
    q.pushFront(73);
    q.print();
}