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
Node*middleNodeLL(Node*head){
       Node*slow=head;
       Node*fast=head;
       while(fast && fast->next){
           slow=slow->next;
           fast=fast->next->next;
       }
       return slow;
}

int main(){

    Node* head = NULL;

    head = insertAtTail(head, 1);
    head = insertAtTail(head, 2);
    head = insertAtTail(head, 3);
    head = insertAtTail(head, 4);
    head = insertAtTail(head, 5);

    print(head);

    Node* mid = middleNodeLL(head);

    if(mid)
        cout << "Middle Node: " << mid->data;

    return 0;
}
