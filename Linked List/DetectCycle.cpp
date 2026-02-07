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

bool DetectCycle(Node*head){
      if(head==NULL) return false;

      Node*slow=head;
      Node*fast=head;

      while(fast && fast->next){
        
           slow=slow->next;
           fast=fast->next->next;
              if(slow==fast) return true;
      }
      return false;
      
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

    if (DetectCycle(head))
        cout << "Cycle detected\n";
    else
        cout << "No cycle detected\n";

    return 0;
}
