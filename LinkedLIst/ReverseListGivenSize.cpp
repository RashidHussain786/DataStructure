#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node *next;
    Node(int val){
     data=val;
     next=NULL;
 }
};

void InsertAtLast(Node* &head, int value){
    Node* n=new Node(value);

    if(head==NULL){
        head=n;
        return ;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void PrintList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

   Node* ReverseList(Node* head,int k){
    Node *currnode,*prevnode,*temp;
    currnode=head;
    prevnode=NULL;
    temp=NULL;
    int i=0;
    while(currnode!=NULL&& i<k){
          temp=currnode->next;
          currnode->next=prevnode;
          prevnode=currnode;
          currnode=temp;
          i++;
    }
    if(currnode!=NULL){
        head->next=ReverseList(currnode,k);
    }
    return prevnode;
}

int main(){
    int k=3;
    Node* head=NULL;
    Node* temp=NULL;
    cout<<"enter the size"<<endl;
    int n;
    cin>>n;
    cout<<"enter the data"<<endl;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        InsertAtLast(head,data);
    }
    temp=ReverseList(head, k);
    PrintList(temp);
    return 0;
}