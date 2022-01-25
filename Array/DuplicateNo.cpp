#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n]={1,2,3,3,4};
    map<int ,int> p;
    for(int i=0;i<n;i++){
          p[arr[i]]++;
    } 
    for(auto it: p){
        if(it.second>1){
            cout<<it.first<<" count ->"<<it.second<<endl;
        }
    }
    return 0;
}
