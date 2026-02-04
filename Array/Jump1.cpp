#include<bits/stdc++.h>
using namespace std;

bool Jump1(vector<int>arr){
 int maxReach=0;

     for(int i=1;i<arr.size();i++){
        if(i>maxReach) return false;
          maxReach=max(maxReach,i+arr[i]);
 
     }
return true;
}

int main(){

    vector<int>arr={2,3,1,1,4};
    if(Jump1){
         cout<<"We can Reach at end.."<<endl;

    }
    else{
         cout<<"We cant Reach at end"<<endl;
    }
}