#include<bits/stdc++.h>
using namespace std;

void GetArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void merge(int arr1[], int arr2[], int n, int m) {
	    vector<int> v;
	    for( int i=0;i<n;i++){
	        v.push_back(arr1[i]);
	    }
	    for( int i=0;i<m;i++){
	        v.push_back(arr2[i]);
	    }
	    sort(v.begin(),v.end());
	    for(int i=0;i<v.size();i++){
	        cout<<v[i]<<" ";
	    }
	}
    
    void merge2(int arr1[], int arr2[], int n, int m) {
	    int i=n-1;
	    int j=0;
	    
	    while(i>=0 && j<m){
	    if(arr1[i]>arr2[j]){
	        swap(arr1[i],arr2[j]);
	    }
	    
	    i--;
	    j++;
	    }
	    
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
        for (int i=0;i<n;i++){
            cout<<arr1[i]<<" ";
        }
         for (int i=0;i<m;i++){
            cout<<arr2[i]<<" ";
        }
	        
	}

    int main(){
        int n;
        cout<<"enter the size of first array->"<<endl;
        cin>>n;
        int arr1[n];
        cout<<"enter the element of first array->"<<" ";
        GetArray(arr1,n);
        int m;
        cout<<"enter the size of second array->"<<endl;
        cin>>m;
        int arr2[m];
        cout<<"enter the element of second array->"<<" ";
        GetArray(arr2,m);
        merge(arr1,arr2,n,m);
        cout<<endl;
        cout<<" Second Method to find "<<endl;
        merge2(arr1,arr2,n,m);
        return 0;
    }