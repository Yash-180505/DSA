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
Node*Reverse(Node*head){
if(!head) return NULL;
    Node*curr=head;
    Node*prev=NULL;
    while(curr){
          Node*nextNode=curr->next;
          curr->next=prev;
          prev=curr;
          curr=nextNode;
    }
    return prev;
}

int main(){
     
    Node *head = NULL;

    head = insertAtHead(head, 10);
    head = insertAtHead(head, 11);
    head = insertAtHead(head, 12);
    head = insertAtHead(head, 13);

    head=Reverse(head);
    print(head);
  return 0;
}