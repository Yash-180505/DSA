#include<bits/stdc++.h>
using  namespace std;

class Stack{
     int*arr;
     int top;
     int size;

     public:
         Stack(int s){
                   size=s;
                   arr=new int[size];
                   top=-1;
         }
 
           bool  isEmpty(){
               return top==-1;
           }
           bool isFull(){
             return top==size-1;
           }
         void Push(int data){
             
               if(isFull()) return ;
               arr[++top]=data;
         }
         int Pop(){
                if(isEmpty()) return -1;
             return arr[top--];
         }
         int Peek(){
              if(isEmpty()) return-1;
               return arr[top];
         }
         int Size(){
              return top+1;
         }



};
int main(){
    Stack s(5);

    s.Push(10);
    s.Push(20);
    s.Push(30);

    cout<<s.Peek()<<endl;
    cout<<s.Size()<<endl;

    cout<<s.Pop()<<endl;
    cout<<s.Peek()<<endl;

    return 0;
}
