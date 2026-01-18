#include<bits/stdc++.h>
using namespace std;

class MinStack {
    stack<int> MainStack;
    stack<int> Minstack;

public:
    void Push(int val){
        MainStack.push(val);
        if(Minstack.empty()) Minstack.push(val);
        else Minstack.push(min(val, Minstack.top()));
    }

    void Pop(){
        MainStack.pop();
        Minstack.pop();
    }

    int Top(){
        return MainStack.top();
    }

    int GetMin(){
        return Minstack.top();
    }
};

int main(){
    MinStack s;

    s.Push(5);
    s.Push(2);
    s.Push(8);
   //5,2,8
   //5,2
    cout << s.GetMin() << endl; // 2
    s.Pop();
    cout << s.GetMin() << endl; // 2
    s.Pop();
    cout << s.GetMin() << endl; // 5

    return 0;
}
