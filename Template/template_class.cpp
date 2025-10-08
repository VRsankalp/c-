#include<iostream>
using namespace std ;
template<class T>
class Myclass{
    T name  ;
    T course;
    public:
        void set_name(T name){
            this->name=name;
        }
        void set_course(T course){
            this->course=course;

        }
        T get_name(){
            return name ;
        }
        T get_course(){
            return course ;
        }



};

int main(){
    Myclass<string>myclass;
    myclass.set_name("hello");
    myclass.set_course("CS3E");
    cout<<myclass.get_name()<<endl;
    cout<<myclass.get_course()<<endl;
}