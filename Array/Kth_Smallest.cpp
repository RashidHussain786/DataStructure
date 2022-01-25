#include <bits/stdc++.h>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

void Match(int arr[],int k,int n){
    for(int i=0;i<n;i++){
        if(i+1==k){
            cout<<arr[i]<<endl;
        }
    }
}

void KthMin(int arr[],int k,int n){
    sort(arr,arr+n);
    Match(arr,k,n);
}

int main(){
    int k=3;
    int arr[]={23,43,12,54,16,87};
    int n=sizeof(arr)/sizeof(arr[0]);
    PrintArray(arr,n);
    cout<<"Kth min no->"<<endl;
    KthMin(arr,k,n);

    return 0;
}