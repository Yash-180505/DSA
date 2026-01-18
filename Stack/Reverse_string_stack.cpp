#include<bits/stdc++.h>
using namespace std;
string reverseString(string s){
     

    stack<char>st;
    string ans="";
    for(char c : s){
          st.push(c);

    }
    while(!st.empty()){
          ans+=st.top();
          st.pop();
    }
 return ans;
}
int main(){
  string ans=reverseString("yashhh");
  cout<<" "<<ans<<" ";
    
}