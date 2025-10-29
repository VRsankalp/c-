#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1={10,20,30,40};
    vector<int> v2={1,2,3,4};
    v1.swap(v2);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i];
    }
    cout<<endl;
     for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<"   ";
    }

}