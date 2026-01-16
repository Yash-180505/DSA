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

Node *mergeLL(Node *head1, Node *head2)
{
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    Node dummy(0);
    

    Node *tail = &dummy;
    Node *curr1 = head1;
    Node *curr2 = head2;

    while (curr1 && curr2)
    {
        if (curr1->data < curr2->data)
        {
            tail->next = curr1;
   
            curr1 = curr1->next;
        }
        else
        {
            tail->next = curr2;
            
            curr2 = curr2->next;
        }
      tail=tail->next;
    }

   if(curr1)
    {
        tail->next = curr1;
     
    }
    if(curr2)
    {
        tail->next = curr2;
  
    }

    return dummy.next;
}


int main(){

    Node* head1 = NULL;
    Node* head2 = NULL;

    head1 = insertAtTail(head1, 1);
    head1 = insertAtTail(head1, 3);
    head1 = insertAtTail(head1, 5);

    head2 = insertAtTail(head2, 2);
    head2 = insertAtTail(head2, 4);
    head2 = insertAtTail(head2, 6);

    cout << "List 1: ";
    print(head1);

    cout << "List 2: ";
    print(head2);

    Node* mergedHead = mergeLL(head1, head2);

    cout << "Merged List: ";
    print(mergedHead);

    return 0;
}
