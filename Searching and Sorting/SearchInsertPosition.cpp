#include<bits/stdc++.h>
using namespace std;
int InsertPosition(vector<int>arr,int target){

    int low=0;
    int high=arr.size();
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return low;

}

int main(){
    vector<int>arr={1,2,3,4,5,6,7,8};
    int idx=InsertPosition(arr,3);

     cout<<"Index :"<<idx<<endl;
}