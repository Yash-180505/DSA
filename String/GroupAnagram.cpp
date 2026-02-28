#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> GroupAnagram(vector<string>strs){
     unordered_map<string,vector<string>>mp;

     for(string s :strs){
          string t=s;
          sort(t.begin(),t.end());
          mp[t].push_back(s);
     }

      vector<vector<string>>ans;
     for(auto it: mp){
          ans.push_back(it.second);
     }

     return  ans;
}
int main(){
     vector<string>strs={"eat","tea","tan","ate","nat","bat"};

      vector<vector<string>>ans=GroupAnagram(strs);

      for(auto group : ans){
            cout<<"[ ";
            for(auto word : group){
                  cout<<word<<" ";
            }
            cout<<"]\n";
      }

      return 0;


}