#include<iostream>
using namespace std;

void InsertArray(int arr[],int n){
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
}

int solution(int arr[],int l,int h,int key){
    if(l>h) return -1;
    int mid=l+h/2;
    if(arr[mid]==key)return mid;
    if(arr[l]<=arr[mid]){
     if(key>=arr[l]&& key<=arr[mid])
           return solution(arr,l,mid-1,key);
        return solution(arr,mid+1,h,key);
    }
    if(key>=arr[mid]&& key<=arr[h])
           return solution(arr,mid+1,h,key);  
        return solution(arr,l,mid-1,key);         
}

int main(){
    int n;
    int key;
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter the key"<<endl;
    cin>>key;
    cout<<"enter the data"<<endl;
    int arr[n];
    InsertArray(arr,n);
    int ans=solution(arr,0,n-1,key);
     if (ans != -1)
        cout << "Index: " << ans << endl;
    else
        cout << "Key not found";
    
    return 0;
}