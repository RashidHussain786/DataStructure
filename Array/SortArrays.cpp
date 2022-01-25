#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

void SortArray(int arr[],int n){
    int zero=0,one=0,two=0;
   for(int i=0;i<n;i++){
       if(arr[i]==0) zero++;
       else if(arr[i]==1) one++;
       else two++;
   }
   int k=0;
   for(int i=0;i<zero;i++) arr[k++]=0;
    for(int i=0;i<one;i++) arr[k++]=1;
     for(int i=0;i<two;i++) arr[k++]=2;
     for(int i=0;i<n;i++) cout<<arr[i]<<endl;
}


int main(){
    int arr[]={0,1,2,1,2,2,1,1,0,0,2,};
    int n=sizeof(arr)/sizeof(arr[0]);
    SortArray(arr,n);
    cout<<"Sorted array->";
    PrintArray(arr,n);
}