#include<iostream>
using namespace std;


class Node{
      public:
        int data;
        Node*next;

        Node(int d){
              data=d;
              next=NULL;
        }
};

Node*InsertAthead(Node*head ,int data){
      Node*newNode=new Node(data);
      if(head==NULL) return newNode;

      newNode->next=head;
      head=newNode;

      return head;
}

Node*InsertAtTail(Node*head,int data){
      Node*newNode=new Node(data);
      if(head==NULL){
           return newNode;
      }
     Node*curr=head;
     while(curr->next){
          curr=curr->next;
     }

     curr->next=newNode;


     return head;


}

Node*InsertionAtPosition(Node*head,int data,int pos){
   

      if(pos==1)  return InsertAthead(head,data);

      Node*curr=head;
      for(int i=1 ;i<pos-1 && curr;i++){
              curr=curr->next;
      }

      if(curr==NULL) return head;
      Node*newNode=new Node(data);
newNode->next=curr->next;
 curr->next=newNode;

       return head;

       
}

void PrintLL(Node*head){
      Node*curr=head;
      while(curr){
          cout<<curr->data<<"->";
          curr=curr->next;
      }
      cout<<"NULL";
}

int main(){


    Node*head=new Node(2);

    head=InsertAthead(head,1);
    head=InsertAtTail(head,3);

    head=InsertionAtPosition(head,4,3);

    PrintLL(head);


}