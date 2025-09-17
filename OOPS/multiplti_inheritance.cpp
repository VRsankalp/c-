#include <iostream>
using  namespace std ;
class Teacher {
    public:
     void teacher(){
        cout<<"teaching"<<endl;
     }


};
class Research {
    public:
     void research(){
        cout<<"reasearch ";
     }
};

class Professor :public Teacher ,public Research{
    public :
     void guide(){
        cout<<"guidede"<<endl;
     }

};