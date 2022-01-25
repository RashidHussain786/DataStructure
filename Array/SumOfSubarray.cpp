#include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++)
     cout<<arr[i]<<endl;
}

long SumOfSubArray(int arr[],int n){
 long sum = INT_MIN;
 long tempSum = 0;
        for(int i = 0; i<n; i++){
            tempSum += arr[i];
            sum = max(sum,tempSum);
            if(tempSum<0)
            tempSum = 0;
        }
        return sum;
    }


int main(){
    int arr[]={1,2,3,-2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    PrintArray(arr,n);
    cout<<"max sum of subarray is->"<<endl;
    cout<<SumOfSubArray(arr,n);
}