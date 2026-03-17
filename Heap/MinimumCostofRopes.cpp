#include<bits/stdc++.h>
using namespace std;

long long minCost(long long arr[],long long n){
    priority_queue<long long,vector<long long>,greater<long long>>pq;

     for(int i=0;i<n;i++){
          pq.push(arr[i]);
     }
  long long ans=0;
 
     while(pq.size()>1){
       long long a=pq.top();
          pq.pop();
       long long  b=pq.top();
          pq.pop();

        long long sum=a+b;

     ans+=sum;
     pq.push(sum);
     }
     return ans;
}
int main(){
    long long arr[]={4,3,2,6};

     long long minCostRopes=minCost(arr,4);

     cout<<"Min Cost:"<<minCostRopes<<endl;

}