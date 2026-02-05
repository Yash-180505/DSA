#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> insertInterval(vector<vector<int>>& intervals, vector<int>& newInterval){
     vector<vector<int>>ans;
      int n=intervals.size();
      int i=0;
    while(i<n &&intervals[i][1]<newInterval[0]){
          ans.push_back(intervals[i]);
          i++;
    }
    while(i<n && intervals[i][0]<=newInterval[1]){
         newInterval[0]=min(intervals[i][0],newInterval[0]);
         newInterval[1]=max(intervals[i][1],newInterval[1]);
         i++;
    }
    ans.push_back(newInterval);
    while(i<n){
        ans.push_back(intervals[i]);
        i++;
    }
     return ans;
}

  int main(){

      vector<vector<int>>intervals={{1,2},{3,5},{6,7},{8,10},{12,16}};
      vector<int>newInterval={4,8};

      vector<vector<int>>ans=insertInterval(intervals,newInterval);


      for(auto x: ans){
          for(auto i: x){
               cout<<i<<" ";
          }
      }

  }