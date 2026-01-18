#include<bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int>& ast) {
    stack<int> st;

    for(int x : ast){
        bool destroyed = false;

        while(!st.empty() && st.top() > 0 && x < 0){
            if(abs(st.top()) < abs(x)){
                st.pop();
                continue;
            }
            else if(abs(st.top()) == abs(x)){
                st.pop();
            }
            destroyed = true;
            break;
        }

        if(!destroyed) st.push(x);
    }

    vector<int> res;
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    vector<int> ast = {5,10,-5};
    vector<int> ans = asteroidCollision(ast);

    for(int x: ans) cout << x << " ";
    return 0;
}
