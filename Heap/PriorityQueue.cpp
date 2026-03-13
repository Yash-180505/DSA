#include<bits/stdc++.h>
using namespace std;
int main(){

    priority_queue<int>pq;//maxHeap
    pq.push(4);
    pq.push(2);
    pq.push(5);

  cout<<pq.top()<<endl;
  cout<<pq.size();

  if(pq.empty()){
      cout<<"\nPriority Queue Empty"<<endl;
  }
  else{
      cout<<"\nPriority  Queue Not Empty"<<endl;
  }

  //minn Heap

  priority_queue<int,vector<int>,greater<int>>minheap;

  minheap.push(3);
  minheap.push(7);
  minheap.push(1);
  minheap.push(2);

  cout<<minheap.top();
    return 0;
}