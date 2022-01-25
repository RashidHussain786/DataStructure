#include<bits/stdc++.h>
using namespace std;

void GetArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void Solution(int arr[],int n){
    int k=1;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            v.push_back(arr[i]);
        }
        k++;
    }
   for(int i=0;i<v.size()-1;i++){
       cout<<v[i]<<" ";
   }
}

int main(){
    int n;
    cout<<"enter the number of element"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element"<<endl;
    GetArray(arr,n);
    Solution(arr,n);

    return 0;
}