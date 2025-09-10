#include<iostream>
using namespace std;
class Student {
    string name ; 
    int rollno ;
    public:
    Student(){
        name="Aman";
        rollno=974398;
    }
    Student(Student &s){
        this->name=s.name;
        this->rollno=s.rollno;
    }
    Student(string name,int rollno){
        this->name =name;
        this->rollno=rollno;
    }
    void Update(string name , int rollno){
        this->name =name;
        this->rollno=rollno;

    }
    void display (){
        cout<<name<<" "<<rollno<<endl ;

    }

};

class Human{
    string name;
    int age;
    public:
    Human(string name,int age){
        this->name=name;
        this->age=age;
    }
    void show(){
        cout<<name<<" "<<age<<endl;
    }
};
int main(){
    // Student s1;
    // Student s("hello",2345);
    // Student s2(s);   // Copy Constructor Called
    // s.display();
    // s.Update("pOKENMON" , 56) ;
    // s.display();
    // s1.display(); 
    // s2.display();
    
    Human h("Manohar Pandey", 20);
    Human h1("Tushar Pandey", 28);
    Human h2("Hariom Pandey", 60);
    h.show();
    h1.show();
    h2.show();
    return 0 ; 


}