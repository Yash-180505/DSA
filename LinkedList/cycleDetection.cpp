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

Node *insertAtHead(Node *head, int data)
{

    Node *temp = new Node(data);
    temp->next = head;

    return temp;
}
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

bool  detectCycle(Node*head){
       if(!head) return false;
       Node*slow =head;
       Node*fast=head;
       while(fast && fast->next){
          slow=slow->next;
          fast=fast->next->next;
          if(slow == fast){
               return true;
          }
         
       }
 
  return false;
}
int main(){

    Node* head = NULL;

    head = insertAtTail(head, 1);
    head = insertAtTail(head, 2);
    head = insertAtTail(head, 3);
    head = insertAtTail(head, 4);
    head = insertAtTail(head, 5);

    // ---- Creating a cycle manually ----
    // Linking last node to second node
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = head->next;   // cycle created

    // ---- Detect Cycle ----
    if(detectCycle(head))
        cout << "Cycle Present";
    else
        cout << "No Cycle";

    return 0;
}
