#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

Node *DeletionAtpos(Node *head, int pos)
{
    if (head == NULL)
        return head;
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;

    for (int i = 1; i < pos && curr; i++)
    {
        prev = curr;
        curr = curr->next;
    }
    if (curr == NULL)
        return head;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;

    return head;
}

Node *deleteNodeByValue(Node *head, int data)
{
    if (head == NULL)
        return head;

        if(head->data==data){
               Node*temp=head;
               head=head->next;
               temp->next=NULL;
               delete temp;
               return head;
        }
    Node *curr = head;
    Node *prev = NULL;
    while (curr && curr->data != data)
    {
        prev = curr;
        curr = curr->next;
    }
    if (curr == NULL)
        return head;

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;

    return head;
}

void PrintLL(Node *head)
{
    Node *curr = head;
    while (curr)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL";
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
    head = deleteNodeByValue(head, 5);

    PrintLL(head);
}