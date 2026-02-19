#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
   int data;
   Node*next;
   Node(int data){
       this->data=data;
       this->next=NULL;
   }
};

Node*InsertionSortLL(Node*head){
     if(!head &&!head->next){
           return head;
     }
     Node*dummy=new Node(-1);

     while(head){
          Node*curr=head;
          head=head->next;

          Node*prev=dummy;
          while(prev->next && prev->next->data< curr->data){
              prev=prev->next;
             
          }
          curr->next=prev->next;
          prev->next=curr;
     }
     return dummy->next;
}
void printLL(Node* head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


int main(){
    Node* head = new Node(4);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head->next->next->next = new Node(3);

    cout << "Before sorting: ";
    printLL(head);

    head = InsertionSortLL(head);

    cout << "After sorting: ";
    printLL(head);

    return 0;
}
