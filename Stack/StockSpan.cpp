#include<bits/stdc++.h>
using namespace std;
vector<int> StockSpan(vector<int>stock){
//arr = {100, 80, 60, 70, 60, 75, 85}
    int n=stock.size();
    vector<int>span(n);
    stack<int>st;
    for(int i=0;i<n;i++){
         
         while(!st.empty() && stock[st.top()]<=stock[i]){
       
             st.pop();
         }
         if(st.empty())span[i]=i+1;
          else  span[i]=i-st.top();  //0 1 2
         st.push(i);

    }
    return span;
} 
int main(){
    vector<int> stock = {100,80,60,70,60,75,85};

    vector<int> res = StockSpan(stock);

    for(int x : res)
        cout << x << " ";

    return 0;
}
