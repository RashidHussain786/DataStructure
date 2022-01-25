#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<endl;
}

void Unioun(int arr[],int arr1[],int n,int k){
      int f=k;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            if(arr[i]==arr1[j]){
                f--;
            }
        }
    }
    cout<<"The Unoiun of two array is->"<<n+f<<endl;;
}
void Intersection(int arr[],int arr1[],int n,int k){
    int f=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
           if(arr[i]==arr1[j]) f++;
        }
    }
    cout<<"the intersection of two array is->"<<f;
}

int main(){
    int arr[]={12,34,54,65,78};
    int arr1[]={2,12,34,67,98};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=sizeof(arr1)/sizeof(arr1[0]);
    cout<<"first array is"<<endl;
    PrintArray(arr,n);
    cout<<"second array is"<<endl;
    PrintArray(arr1,k);
    Unioun(arr,arr1,n,k);
    Intersection(arr,arr1,n,k);
    return 0;
}