#include<bits/stdc++.h>
using namespace std;
  
string ReverseWordsInString(string s){
      stringstream ss(s);
      string word;
      vector<string>v;
      while(ss>>word){
          v.push_back(word);

      }
      reverse(v.begin(),v.end());

      string ans="";
      for(int i =0;i<v.size();i++){  
         ans+=v[i];
         if(i!=v.size()-1) ans+=" ";
      }

      return ans;
}
int main(){
   string s="sky is blue";
   string ans= ReverseWordsInString(s);
   cout<<"Reverse Word String:"<<ans;
}