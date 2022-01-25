#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data =value;
        next =NULL;
    }
};

void InsertAtLast(Node* &head, int value){ //we take head by refrence not by value because we modified the node
    Node* n= new Node(value);
    if(head==NULL){
        head=n;
        return ;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;          //same as Increment
    }
    temp->next=n;
}

void PrintList(Node* head){   //we take head by value beacuse we do not need to modify the node
   Node* temp=head;
   while(temp!=NULL){
       cout<<temp->data<<" ";
       temp=temp->next;
   }
   cout<<endl;
}

int main(){

  Node* head=NULL;
   cout<<"enter the length of list"<<endl;
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
          cout<<"enter the "<<i <<"  data"<<endl;
          int value;
          cin>>value;
       InsertAtLast(head,value);
   }
   PrintList(head);

   return 0;

}

