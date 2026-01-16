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
Node* removeNthfromLast(Node*head,int k){
      int n=LengthLL(head);
     if(k>n) return  head;

     if(k==n){
             Node* temp = head;
        head = head->next;
        delete temp;
        return head;
     }
  
 Node* curr=head;
   for(int i=1;i<n-k;i++){
         curr=curr->next;
   }


   Node* temp=curr->next;
   curr->next=temp->next;
   delete temp;


   return head;

}

Node*approach2(Node*head,int k){ 
    Node dummy(0);
    dummy.next=head;


    Node*slow=&dummy;
    Node*fast=&dummy;

    for(int i =0;i<k;i++){
        if(fast==NULL) return head;

           fast=fast->next;
           
    }

    while(fast->next){
          slow=slow->next;
          fast=fast->next;
    }

    Node*temp=slow->next;
    slow->next=temp->next;
    delete temp;

    return dummy.next;
}
int main(){

    Node* head = NULL;

    head = insertAtTail(head, 1);
    head = insertAtTail(head, 2);
    head = insertAtTail(head, 3);
    head = insertAtTail(head, 4);
    head = insertAtTail(head, 5);

    cout << "Original List: ";
    print(head);

    int k = 2;   // remove 2nd node from end

    head = approach2(head, k);

    cout << "After Removing " << k << "th node from end: ";
    print(head);

    return 0;
}
