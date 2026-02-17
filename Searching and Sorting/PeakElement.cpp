#include<bits/stdc++.h>
using namespace std;
int PeakElement(vector<int>arr){

    int low=0;
    int high=arr.size()-1;
    while(low<high){
        int mid=low+(high-low)/2;
        if(arr[mid]<arr[mid+1]) low=mid+1;
        else high=mid;
    }
    return low;

}

int main(){
    vector<int>arr={10,20,15,2,27,90,63};
    int ans=PeakElement(arr);
    cout<<"Peak Element:"<<arr[ans]<<endl;
  
    
}