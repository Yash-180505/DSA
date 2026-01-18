#include<bits/stdc++.h>
using  namespace std;
class Node{
    public:
      int data;
      Node*next;
      
      Node(int data){
          this->data=data;
          next=NULL;
      }
};
Node*Push(Node*head ,int data){

   Node*newNode=new Node(data);
     
       newNode->next=head;
       head=newNode;


    return head;
}

Node*Pop(Node*head){

    if(!head) return NULL;

    
    Node*temp=head;
    head=head->next;
    delete temp;

    return head;


}
int Size(Node*head){
    int len=0;
    Node*curr=head;
    while(curr){
           len++;
           curr=curr->next;
    }
 return len;
}
Node*Top(Node*head){
         return head;
}

void print(Node* head){
    Node* curr=head;
    cout<<"Stack (Top to Bottom): ";
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int main(){
    Node* head=NULL;

    head=Push(head,10);
    head=Push(head,20);
    head=Push(head,30);
    head=Push(head,40);
    head=Push(head,50);

    print(head);

    cout<<"Top: "<<Top(head)->data<<endl;
    cout<<"Size: "<<Size(head)<<endl;

    head=Pop(head);
    head=Pop(head);

    print(head);

    cout<<"Top after Pop: "<<Top(head)->data<<endl;
    cout<<"Size after Pop: "<<Size(head)<<endl;

    head=Pop(head);
    head=Pop(head);
    head=Pop(head);

    if(Top(head)==NULL)
        cout<<"Stack is empty"<<endl;

    return 0;
}
