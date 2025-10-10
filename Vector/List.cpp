#include<iostream>
#include<list>
using namespace std ;
int  main(){
    list<int>l = {10,20,30,40,50 };

    //insert element 

    l.push_back(12);
    l.push_front(134);

    cout<<"list element";

    for(int val : l ){
        cout<<val<<"  ";
    }
    cout<<"\nfront element "<<l.front();
    cout<<"\n BAck element "<<l.back();


    // remove element 
    
    l.pop_front();
    l.pop_back();
    
    cout<<"\nafter the pop operation:";
    
    for(int val : l ){
        cout<<val<<"  ";
    }

    cout<<endl;

//using the iterator to print the list value ;;;
 list<int>::iterator it ; 
 for(it = l.begin();it!=l.end();it++){
    cout<<*it<<"->";
 }
    cout<<endl;


 //here in the loop we use auto to automatically define the iterator 
 cout<<"here the we use auto "<<endl;
 for( auto it = l.begin();it!=l.end();it++){
    cout<<*it<<"->";
 }




}