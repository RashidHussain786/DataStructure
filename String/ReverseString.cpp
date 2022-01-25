#include<bits/stdc++.h>
using namespace std;

void PrintString(string s[],int n){
    for(int i=0;i<n;i++){
        cout<<s[i]<<' ';
    }
}

void Reverse(string s[],int n){
    int left=0;
    int right=n-1;
    while(left<right){
       string temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
     /* s[left]=s[left]^s[right];
       s[right]=s[left]^s[right];
        s[left]=s[left]^s[right];
         ++left;
         --right;
*/

    }
}

int main(){
    string s[]={"a","v","d","r","p","o"};
    int n=sizeof(s)/sizeof(s[0]);
    cout<<"Original String is->"<<endl;
    PrintString(s,n);
    Reverse(s,n);
    cout<<endl;
    cout<<"Reverse String is->"<<endl;
    PrintString(s,n);
    return 0;
}