#include<iostream>
using namespace std;

class Student{
    int id;
    public:
    Student(int id){
        this->id=id;
        cout<<"Constructor called! "<<endl;
    }
    
    void display(){
        cout<<"ID: "<<id<<endl;
    }
    ~Student(){
        cout<<"the destructor is called ";
    }
};

int main(){
    Student s(6);
    s.display();
}