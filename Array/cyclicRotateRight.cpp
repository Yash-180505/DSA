#include<bits/stdc++.h>
using namespace std;
void rotateBy1Right(vector<int>&arr){
       int n=arr.size();
    int last=arr[n-1];
   
    for(int i=n-1;i>0;i--){
         arr[i]=arr[i-1];

    }
    arr[0]=last;
}
int main(){

    vector<int>arr={1,2,3,4,5};
    rotateBy1Right(arr);

    for(int i:arr){
          cout<<i<<" ";
    }

}