#include<iostream>
using namespace std;

void toggle(char arr[],int N){
    for(int i=0;i<N;i++){
        if((arr[i])>='A' && arr[i]<='Z'){
            arr[i]=(char)((int)(arr[i])+32);
        }else{
            arr[i]=(char)((int)(arr[i])-32);
        }
    }
}

void display(char arr[],int N){
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
}

void input(char arr)

int main(){
    char arr[]={'K','a','R','a','N'};
    toggle(arr,5);
    display(arr,5);
}