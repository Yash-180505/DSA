#include<bits/stdc++.h>
using namespace std;
void rotateBy1Left(vector<int>&arr){
      
    int first=arr[0];
    int n=arr.size();
    for(int i=0;i<n-1;i++){
         arr[i]=arr[i+1];

    }
    arr[n-1]=first;
}
int main(){

    vector<int>arr={1,2,3,4,5};
    rotateBy1Left(arr);

    for(int i:arr){
          cout<<i<<" ";
    }

}