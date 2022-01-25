#include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
void GetArray(int arr[],int n){
    for(int i=0;i<n;i++) cin>>arr[i];
}

int MinTheHeight(int arr[],int n,int k){
    sort(arr,arr+n);
    int CurrAns=arr[n-1]-arr[0];
    int mi,ma;
    int smallest=arr[0]+k;
    int largest=arr[n-1]-k;
    for(int i=0;i<n;i++){
        mi=min(smallest,arr[i+1]-k);
        ma=max(largest,arr[i]+k);
      if(mi<0)continue;
      CurrAns=min(CurrAns,ma-mi);
    }
    return (CurrAns);
}

int main(){
    int k=5;
    cout<<"enter the no of element"<<endl;
    int n;
    cin>>n;
    cout<<endl;
    cout<<"enter the element"<<endl;
    int arr[n];
    GetArray(arr,n);
   // PrintArray(arr,n);
    cout<<"Minimum Height is->"<<endl;
    cout<<MinTheHeight(arr,n,k);

    return 0;
}