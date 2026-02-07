#include<iostream>
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


void PrintLL(Node*head){
      Node*curr=head;
      while(curr){
          cout<<curr->data<<"->";
          curr=curr->next;
      }
      cout<<"NULL";
}


int lengthLL(Node*head){
       int len=0;
       Node*curr=head;
       while(curr){
           len++;
           curr=curr->next;
        
       }
       return len;
}
Node*Intersection(Node*h1,Node*h2){
      int len1=lengthLL(h1);
         int len2=lengthLL(h2);

         Node*first=h1;
         Node*second=h2;
      if(len1 > len2){
        int diff = len1 - len2;
        while(diff--){
            first = first->next;
        }
    } else {
        int diff = len2 - len1;
        while(diff--){
            second = second->next;
        }
    }


    while(first  && second){
          if(first==second) return first;
          first=first->next;
          second=second->next;
        
    }

    return NULL;

}
int main(){
    
    Node* common = new Node(8);
    common->next = new Node(9);

    
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = common;

    Node* head2 = new Node(4);
    head2->next = new Node(5);
    head2->next->next = common;

    Node* ans = Intersection(head1, head2);

    if(ans)
        cout << "Intersection at node with data: " << ans->data << endl;
    else
        cout << "No intersection\n";

    return 0;
}


