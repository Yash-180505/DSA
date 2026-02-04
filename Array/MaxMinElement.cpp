#include<bits/stdc++.h>
using namespace std;
void Max_Min_inArray(vector<int>arr){
    int minn=INT_MAX;
    int maxx=INT_MIN;
    for(int i=0;i<arr.size();i++){
          if(arr[i]<minn){
               minn=arr[i];
          }
          if(arr[i]>maxx){
              maxx=arr[i];
          }
    }

    cout<<"Maximum Number:"<<maxx<<endl;
    cout<<"Minimum Number:"<<minn<<endl;
}
int main(){
   vector<int>arr={3,4,2,1,5};
   Max_Min_inArray(arr);
}