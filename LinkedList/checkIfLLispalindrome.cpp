#include<bits/stdc++.h>
using  namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *insertAtTail(Node *head, int data)
{
    Node *temp = new Node(data);
    if (!head)
    {
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->next = temp;
    return head;
} 

bool isPalindrome(Node* head){
     Node*slow=head;
     Node*fast=head;
      while(fast && fast->next){
          slow=slow->next;
          fast=fast->next->next;

      }

      Node*curr=slow;
      Node*prev=NULL;

      while(curr){
         Node*newNode=curr->next;
         curr->next=prev;
         prev=curr;
         curr=newNode;
      }

      Node*first=head;
      Node*second=prev;

      while(second){
            if(first->data != second->data) return false;
            first=first->next;
            second=second->next;
      }

      return true;
}

int main(){

    Node* head = NULL;

 
    head = insertAtTail(head, 1);
    head = insertAtTail(head, 2);
    head = insertAtTail(head, 3);
    head = insertAtTail(head, 2);
    head = insertAtTail(head, 1);

    print(head);

    if(isPalindrome(head))
        cout << "Palindrome Linked List";
    else
        cout << "Not a Palindrome Linked List";

    return 0;
}
