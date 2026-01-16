#include <bits/stdc++.h>
using namespace std;

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

Node *deleteNode(Node *head, int k)
{
    if (!head)
    {
        return NULL;
    }
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *curr = head;
    for (int i = 1; i < k - 1 && curr->next != NULL; i++)
    {
        curr = curr->next;
    }
     if(curr->next == NULL) 
        return head;

    Node *temp = curr->next;
    curr->next = temp->next;
    delete temp;

    return head;
}
int LengthLL(Node *head)
{
    Node *curr = head;
    int len = 0;
    while (curr)
    {
        curr = curr->next;
        len++;
    }

    return len;
}
Node *insertAtposition(Node *head, int data, int k)
{

    if (k == 1)
    {
        return insertAtHead(head, data);
    }
    if (!head)
    {
        return NULL;
    }
    int len = LengthLL(head);
    if (k >= len+1)
    {
        return insertAtTail(head, data);
    }
    Node *curr = head;
    for (int i = 1; i < k - 1 && curr->next != NULL; i++)
    {
        curr = curr->next;
    }

    Node *newNode = new Node(data);
      newNode->next = curr->next;
    curr->next = newNode;
 

    return head;
}

int main()
{
    Node *head = NULL;

    head = insertAtHead(head, 10);
    head = insertAtHead(head, 11);
    head = insertAtHead(head, 12);
    head = insertAtHead(head, 13);
    
    head = insertAtTail(head, 8);

    cout << "Initial List: ";
    print(head);

    head = insertAtposition(head, 20, 3);
    cout << "After Inserting 20 at position 3: ";
    print(head);

    head = deleteNode(head, 2);
    cout << "After Deleting node at position 2: ";
    print(head);

    cout << "Length of Linked List: " << LengthLL(head);

    return 0;
}
