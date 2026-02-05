#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> MergeInterval(vector<vector<int>>intervals){
    if(intervals.empty()) return {};
         sort(intervals.begin(),intervals.end());
         vector<vector<int>>ans;
         ans.push_back(intervals[0]);
         for(int i=1;i<intervals.size();i++){
             if(ans.back()[1]>=intervals[i][0]){
                   ans.back()[1]=max(ans.back()[1],intervals[i][1]);
             }
             else{
                   ans.push_back(intervals[i]);
             }
         }
  return ans;

}
int main(){
     vector<vector<int>>intervals={{1,3},{2,6},{8,10},{15,18}};

     vector<vector<int>>ans=MergeInterval(intervals);

      for(auto x:  ans){
          for(auto i: x){
              cout<<i<<" ";
          }
          cout<<endl;
      }
}