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

Node*RemoveCycle(Node*head){
      if(head==NULL) return head;

      Node*slow=head;
      Node*fast=head;

   while(fast &&fast->next){ 
      slow=slow->next;
      fast=fast->next->next;
      if(slow==fast ) break;
   }
   
   if(fast==NULL ||fast->next==NULL){
       return head;
   }

   slow=head;
   while(slow!=fast){
      slow=slow->next;
      fast=fast->next;
   }

   fast=slow;
   while(fast->next!=slow){
       fast=fast->next;
   }

   fast->next=NULL;
   return head;
     
}
int main() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;


    fifth->next = third;

    head=RemoveCycle(head);
    PrintLL(head);
    return 0;
}
