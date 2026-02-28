#include<bits/stdc++.h>
using namespace std;

vector<int> FindAllAnagram(string s,string p){
    vector<int>ans;
    if(s.size()<p.size()) return ans;

    vector<int>freqP(26,0);
    vector<int>freqS(26,0);

    for(char c:p){
        freqP[c-'a']++;
    }

    for(int i=0;i<s.size();i++){
        freqS[s[i]-'a']++;

        if(i>=p.size()){
            freqS[s[i-p.size()]-'a']--;
        }

        if(freqP==freqS){
            ans.push_back(i-p.size()+1);
        }
    }
    return ans;
}

int main(){
    string s,p;
    cin>>s>>p;

    vector<int>ans=FindAllAnagram(s,p);

    for(int x:ans){
        cout<<x<<" ";
    }

    return 0;
}