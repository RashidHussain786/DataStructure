#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="hello world";
    map<char ,int> p;
    for(int i=0;i<s.size()-1;i++){
          p[s[i]]++;
    } 
    for(auto it: p){
        if(it.second>1){
            cout<<it.first<<" count ->"<<it.second<<endl;
        }
    }
    return 0;
}
