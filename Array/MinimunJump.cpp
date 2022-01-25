#include<iostream>
using namespace std;

void GetArray(int arr[],int n){
    for(int i=0;i<n;i++)
    cin>>arr[i];
}
int MinJump(int arr[],int n){
    int MaxReach=arr[0];
    int Steps=arr[0];
    int jump=1;

    if(n<=1)return 0;
    if(arr[0]==0)return -1;
    for(int i=0;i<n;i++){
        if(i==n-1)return (jump);
        MaxReach--;Steps--;
        if(arr[i]>Steps){
            Steps=arr[i];
        }
        if(MaxReach==0){
            MaxReach=Steps;
            if(MaxReach==0){
                return -1;
            }
            jump++;
        }
    }
    return jump;
}

int main(){
    int n;
    cout<<"enter the lenght of Array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the Array"<<endl;
    GetArray(arr,n);
    cout<<"Min no. of Jump->"<<MinJump(arr,n);

    return 0;
}