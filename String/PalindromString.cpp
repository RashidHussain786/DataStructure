#include<bits/stdc++.h>
using namespace std;

int IsPalindrom(string s){
    int i=0,j=s.size()-1;
   while(i<j){
       if(s[i]!=s[j])  return (0);
       i++;j--;

   }
    return (1);
}

int main(){
    string s="abba";
   cout<< IsPalindrom(s);  
    return 0;
}
