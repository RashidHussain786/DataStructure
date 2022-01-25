#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

void Reverse(int arr[],int first,int last){
    while(last>first){
        arr[first]=arr[first]^arr[last];
        arr[last]=arr[first]^arr[last];
        arr[first]=arr[first]^arr[last];
        first++;
        last--;
    }
}

void Reverse_1(int arr[],int first,int last){
    while(last>first){
        int temp=arr[first];
        arr[first]=arr[last];
        arr[last]=temp;
        first++;
        last--;
    }
}



int main(){
    int arr[]={3,45,23,22,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array"<<endl;
    PrintArray(arr,n);
   // Reverse(arr,0,n-1);
    Reverse_1(arr,0,n-1);
    cout<<"Reverse Array"<<endl;
    PrintArray(arr,n);

    return 0;

}