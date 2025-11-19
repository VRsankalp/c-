#include<iostream>
using namespace std ;
int partion(int arr [] , int lower , int upper){
    int pivot = lower ;
    int left = lower +1;
    int right = upper ; 
    while(left<=right){
        while(arr[pivot]>arr[left]){
            left ++;
        }
        while(arr[pivot]<arr[right]){
            right--;
        }
        if(left<right){
            int temp = arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
        }
    }
          int temp = arr[pivot];
            arr[pivot]=arr[right];
            arr[right]=temp;

        return right ;
    
    
}
void quickSort(int arr[], int lower , int upper){
    if(lower<upper){
        int pivot = partion(arr,lower, upper );
        quickSort(arr,lower,pivot-1);
        quickSort(arr , pivot +1, upper);
    }
    


}
int main(){
    int arr[]={23,343,43,13,223,554};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    quickSort(arr, 0 , n-1);
    cout<<"after sort "<<endl;
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<' ';
    }



}