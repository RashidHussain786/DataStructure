#include<bits/stdc++.h>
using namespace std;

void GetArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++)cout<<arr[i]<<endl;
}

void CountInversion(int arr[],int n){  //time complexity O()
    int count=0;
    for(int i=0;i<n;i++){
        int j=i;
        while(j<n){
            if(arr[i]>arr[j]){
                count++;
                if(arr[i]==arr[j]){
                    cout<<'0';
                }
            }
            j++;
        }
    }
    cout<< "No of count of inversion is->"<<count;
}

int main(){
    int n;
    cout<<"enter the size of array ->"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array ->"<<endl;
    GetArray(arr,n);
    //PrintArray(arr,n);
    CountInversion(arr,n);
    return 0;
    
}