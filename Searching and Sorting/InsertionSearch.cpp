#include<bits/stdc++.h>
using namespace std;
int InsertionSearch(vector<int>arr,int target){
     for(int i=0;i<arr.size();i++){
          if(arr[i]==target) return i;
     }
     return -1;

}

int main(){
    vector<int>arr={1,2,3,4,5,6,7,8};
    int idx=InsertionSearch(arr,5);

    if(idx==-1) cout<<"Not found!!!"<<endl;
    else{
          cout<<"Element Found at Index:"<<idx<<endl;
    }
}