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

Node* startCycleLL(Node*head){
         if(!head) return  NULL;
    Node*slow=head;
    Node*fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast) break;
    }
        

    if(fast==NULL || fast->next==NULL){
            return NULL;
    }
         




    slow=head;
    while(slow!=fast){
          slow=slow->next;
          fast=fast->next;

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

    // Creating a cycle:
    // Last node pointing to node with value 3
    Node* temp = head;
    Node* join = NULL;

    while(temp->next != NULL){
        if(temp->data == 3) join = temp;
        temp = temp->next;
    }
    temp->next = join;   // cycle created

    // Finding starting point of cycle
    Node* start = startCycleLL(head);

    if(start)
        cout << "Cycle starts at node with data: " << start->data;
    else
        cout << "No cycle present";

    return 0;
}
