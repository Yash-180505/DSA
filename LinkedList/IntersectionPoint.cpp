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

Node*IntersectionPoint(Node*head1,Node*head2){
   if(!head1 || !head2) return NULL;
  int len1=LengthLL(head1);
  int len2=LengthLL(head2);
  
  Node*curr1=head1;
  Node*curr2=head2;
  if(len1>len2){

      
       int n=len1-len2;
       while(n>0){
            curr1=curr1->next;
            n--;
       }
  }
  else{
     int n=len2-len1;
      while(n>0){
            curr2=curr2->next;
            n--;
       }
  }
   while(curr1 && curr2){
        if( curr1 == curr2){
               return curr1;
              
        }

        curr1=curr1->next;
        curr2=curr2->next;
   }

return NULL;
       

}

int main(){

    Node* head1 = NULL;
    Node* head2 = NULL;

    // List 1: 1 -> 2 -> 3 -> 4 -> 5
    head1 = insertAtTail(head1, 1);
    head1 = insertAtTail(head1, 2);
    head1 = insertAtTail(head1, 3);
    head1 = insertAtTail(head1, 4);
    head1 = insertAtTail(head1, 5);

    // List 2: 9 -> 10 -> (joins at 4)
    head2 = insertAtTail(head2, 9);
    head2 = insertAtTail(head2, 10);

    // Creating intersection: point list2 next to node with data = 4
    Node* temp = head1;
    while(temp->data != 4){
        temp = temp->next;
    }
    head2->next->next = temp;   // intersection created

    // Finding intersection
    Node* inter = IntersectionPoint(head1, head2);

    if(inter)
        cout << "Intersection at node with data: " << inter->data;
    else
        cout << "No intersection";

    return 0;
}
