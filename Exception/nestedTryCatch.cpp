 #include<iostream>
using namespace std ;
int main(){
    cout<<"hello "<<endl;
    int a =12 , b = 0 , r = 0 ;
    try{
        if(b==0)
            throw runtime_error("Divison by zero" );//thowing an exception
            r = a/b ;
            cout<<"Divison"<<endl;
            
            int x[]={3,4,5,6,7,2};
            int size = sizeof(x)/sizeof(x[0]);
            int index = 40 ;
        
            try{
                if(r<0||r>=size)
                    throw out_of_range("Index out of Bound");
                cout<<x[r]<<endl;
        
                
        
            }
            catch(runtime_error&e){
                
            }
    }
    catch(runtime_error &e){
        cout<<"execption \n"<<e.what()<<endl;
    }
     
    catch(out_of_range&e){
        cout<<"Index out of boundary"<<endl;
        
    }

}

