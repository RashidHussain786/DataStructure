#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int val){
      data=val;
      next=NULL;  
    }
};

void InsertAtLast(node* &head,int val){
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void PrintList(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void ReverseList(node* head){
    node* currnode,*prenode,*temp;
    currnode=head;
    prenode=NULL;
    temp=NULL;
    while(currnode!=NULL){
        temp=currnode->next;
        currnode->next=prenode;
        prenode=currnode;
        currnode=temp;
    }
    head=prenode;
   PrintList(head);
}

int main(){
    node* head=NULL;
    cout<<"enter the size "<<endl;
    int n;
    cin>>n;
    cout<<"enter the data"<<endl;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        InsertAtLast(head,data);
    }
     ReverseList(head);
     return 0;
}