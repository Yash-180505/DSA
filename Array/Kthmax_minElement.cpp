#include<bits/stdc++.h>
using namespace std;
void kth_Max_Min_inArray(vector<int>arr,int k){
    sort(arr.begin(),arr.end());
   int n=arr.size();
   cout<<"K="<<k<<endl;
    cout<<"Kth Maximum Element :"<<arr[n-k]<<endl;
    cout<<"Kth Minimum Element:"<<arr[k-1];
    

}
int main(){
   vector<int>arr={3,4,2,1,5};
   int k=2;
   kth_Max_Min_inArray(arr,k);
}