#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }
}

void SiftNegNo(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=j){
                arr[i]=arr[i]^arr[j];
                arr[j]=arr[i]^arr[j];
                arr[i]=arr[i]^arr[j];
            }
            j++;
        }
}
}

int main(){
    int arr[]={12,-12,34,-23,-45,-78,45,32,4,-5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Sifted array->";
    SiftNegNo(arr,n);
    PrintArray(arr,n);

    return 0;
}