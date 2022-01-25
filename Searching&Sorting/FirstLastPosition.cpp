#include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

void Solution(int arr[],int n,int k){
    int f=-1;
    int l=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            if(f==-1){
                f=i;
                l=i;
            }
            else
            l=i;
        }
    }
    vector<int> v;
    v.push_back(f);
    v.push_back(l);
    cout<<v[0]<<" "<<v[1];

}


int main(){
    int k=5;
    int n=9;
    int arr[n]={1,2,5,5,5,5,12,6,7};
    PrintArray(arr,n);
    Solution(arr,n,k);

    return 0;
}