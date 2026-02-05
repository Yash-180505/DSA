#include<bits/stdc++.h>
using namespace std;

int countWays(int target ,vector<int>&nums){

 if(target==0) return 1;
 if(target<0) return 0;
 int ways=0;
   for(int i=0;i<nums.size();i++){
        ways+=countWays(target-nums[i],nums);
   }

   return ways;
}
    int  main(){
        
       vector<int>nums={1,2,3};
       int target=4;
        int ans= countWays(target,nums);

        cout<<"Count:"<<ans<<endl;
    }
