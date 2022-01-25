#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{ 
    
    int n;
    cout<<"enter the size of first array";
    cin>>n;
    int arr1[n];
     cout<<"enter the araay first->"<<endl;
    for(int i=0;i<n;i++){
     cin>>arr1[i];
     }
    int m;
    cout<<"enter the size of first array";
    cin>>m;
    int arr2[m];
    cout<<"enter the araay second->"<<endl;
     for(int i=0;i<m;i++){
     cin>>arr2[i]; 
   }
   int k=n+m;
   int arr3[k];
   merge(arr1,arr1+n,arr2,arr2+m,arr3);
   double median =arr3[0]+arr3[k-1]/2;
   cout<<"median of two sorted array ->"<<median;
   return 0;
 }