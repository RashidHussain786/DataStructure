#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<endl;
}

void Rotate(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

int main(){
    int arr[]={12,43,23,56,45,76};
    int n=sizeof(arr)/sizeof(arr[0]);
    PrintArray(arr,n);
    Rotate(arr,n);
    cout<<"the cyclic rotation of array by is->"<<endl;
    PrintArray(arr,n);
}