#include<iostream>
using namespace std ;
class Student {
    public:
    int  ID;
    string name ;
    int Age;
    string Course ;
    public :

        Student(){
            int ID =0;
             string name =" ";
             int Age=0;
             string Course="";
        
        }
        void input_display(){
            cout<<"Enter the ID ";
            cin>>ID;
            cout<<"Enter the name ";
            cin>>name;
             cout<<"Enter the Age  ";
             cin>>Age;
             cout<<"Enter the course  ";
             cin>>Course;
             
            
           
        }
        void display(){
             cout<<ID <<"   "<<name<<"    "<<Age<<"     "<<Course << " :::::"<<endl; 
        }

        void Search_id(int id ){
            if(ID==id){
                cout<<ID <<"  "<<name<<"   "<<Age<<" "<<Course<< endl;

            }
            else {
                cout<<"student data is not found "<<endl;
            }
        }

        void update_student( int id ){
            if(ID==id){
            cout<<"enter the  new data of student"<<endl;            
            cout<<"Enter the new  name ";
            cin>>name;
             cout<<"Enter the new   Age  ";
             cin>>Age;
             cout<<"Enter the  new course ";
             cin>>Course;
            }
            else{
                cout<<" the data is not found";
            }
             


        }
        

};
int main(){
    cout<<"enter how many student data you want to enter ";
    int n ;
    cin>>n;
    Student s1[n] ;
    for(int i =  0 ; i< n ;i++ ){
        s1[i].input_display();

    }
    cout<<"The student  data is ::"<<endl;
    for(int i =  0 ; i< n ;i++ ){
        s1[i].display();

    }
    cout<<" write the id to search the student::::"<<endl;
    int se_id;
    cin>>se_id;
    s1->Search_id(se_id);
    cout<<"Enter how many studnt id data you want to update"<<endl;
    int id_m;
    cin>>id_m;
     for(int i =  0 ; i< id_m ;i++ ){
        int id = 0 ;
         cout<<"enter the id of Student  you wnat to update "<<endl;
         cin>>id;
         s1->update_student(id);




    }
    cout<<"the updateed value "<<endl;
    for(int i =  0 ; i< n ;i++ ){
        s1[i].input_display();

    }

    

    



    
    
}
