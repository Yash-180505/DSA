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


void PrintLL(Node*head){
      Node*curr=head;
      while(curr){
          cout<<curr->data<<"->";
          curr=curr->next;
      }
      cout<<"NULL";
}

Node*ReverseLL(Node*head){
       if(head==NULL || head->next==NULL) return head;

       Node*curr=head;
       Node*prev=NULL;

       while(curr ){
          Node*nextNode=curr->next;
          curr->next=prev;
          prev=curr;
          curr=nextNode;
       }

       return prev;

}

int main()
{

    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    head = ReverseLL(head);

    PrintLL(head);
}