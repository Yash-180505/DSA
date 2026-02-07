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

Node*MiddleofLL(Node*head){
      if(head==NULL ||head->next==NULL) return head;
      Node*slow=head;
      Node*fast=head;

      while(fast &&fast->next){
           slow=slow->next;
           fast=fast->next->next;
      }
      return slow;
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

bool PalindromeLL(Node*head){
    if(head==NULL || head->next==NULL) return true;
    Node*middle=MiddleofLL(head);
    Node*secondHalf=ReverseLL(middle->next);
   
    Node*firstHalf=head;
    Node*temp=secondHalf;

    while(temp){ 

          if(firstHalf->data!=temp->data)  return false;
           firstHalf=firstHalf->next;
           temp=temp->next;
    }

    return true;
    

}
int main() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(2);
    Node* fifth = new Node(1);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    if(PalindromeLL(head))
        cout << "Palindrome Linked List\n";
    else
        cout << "Not a Palindrome\n";

    return 0;
}

