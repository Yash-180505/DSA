#include<bits/stdc++.h>
using namespace std;

void largestSumContinousArray(vector<int>arr){
    int currSum=0;
    int maxSum=INT_MIN;
    int start=0;
    int temp=0;
    int end=0;
    for(int i=0;i<arr.size();i++){
        currSum+=arr[i];

        if(currSum>maxSum){
              maxSum=currSum;
              start=temp;
              end=i;
        }
        if(currSum<0){
             currSum=0;
             temp=i+1;
        }
    }

    cout<<"MaxSum:"<<maxSum<<endl;

    cout<<"Subarray with largest Sum:"<<endl;
    for(int i=start;i<=end;i++){
         cout<<arr[i]<<" ";
    }
}
int main(){

    vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
    largestSumContinousArray(arr);


}