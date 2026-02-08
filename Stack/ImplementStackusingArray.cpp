#include<bits/stdc++.h>
using namespace std;
class Stack{
   public:
      int*arr;
      int size;
      int top;

      Stack(int s){
          size=s;
          arr=new int[size];
          top=-1;
      }

bool isEmpty(){
      return top==-1;
}

bool isFull(){
     return top==size-1;
}

void Push(int data){
      if(!isFull()){
           arr[++top]=data;
      }
}
int Pop(){
      if(isEmpty()) return -1;
      return arr[top--];
}

int Peek(){
      if(isEmpty()) return -1;
      return arr[top];
}
};
int main(){

     Stack st(5);

    st.Push(10);
    st.Push(20);
    st.Push(30);
    st.Push(40);
      cout << st.Peek() << endl;
    cout << st.Pop() << endl;
    cout << st.Pop() << endl;

    st.Push(50);
    st.Push(60);

    while(!st.isEmpty()){
        cout << st.Pop() << " ";
    }

    return 0;
}