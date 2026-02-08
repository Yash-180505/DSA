#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int d){
          data=d;
          next=NULL;
    }
};

Node*Push(Node*&head,int data){
      Node*newNode=new Node(data);
      newNode->next=head;
      return newNode;

}
Node*Pop(Node*head){
    if(head==NULL) return NULL;
      Node*temp=head;
      head=head->next;
      delete temp;

      return head;
    }
int  Peek(Node*head){
    if(head==NULL) return -1;
       return head->data;
}

void Print(Node*head){
      if(head==NULL) return ;

      while(head){
          cout<<head->data<<" ";
          head=head->next;
      }
      cout<<endl;
}
 int main(){
    Node* head = NULL;

    head = Push(head, 10);
    head = Push(head, 20);
    head = Push(head, 30);

    cout << "Stack elements: ";
    Print(head);
    cout << endl;

    cout << "Top element: " << Peek(head) << endl;

    head = Pop(head);

    cout << "After one pop: ";
    Print(head);
    cout << endl;

    cout << "Top element: " << Peek(head) << endl;

    return 0;
}
