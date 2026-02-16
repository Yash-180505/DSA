#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int>arr,int target){

    int low=0;
    int high=arr.size();
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target) return mid;
        if(arr[mid]>target) high=mid-1;
        else low=mid+1;
    }
    return -1;

}

int main(){
    vector<int>arr={1,2,3,4,5,6,7,8};
    int idx=BinarySearch(arr,3);

    if(idx==-1) cout<<"Not found!!!"<<endl;
    else{
          cout<<"Element Found at Index:"<<idx<<endl;
    }
}