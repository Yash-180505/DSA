#include<bits/stdc++.h>
using namespace std;



int largestRectangle(vector<int> heights){ 
      int n=heights.size();
      int maxArea=0;
      stack<int>st;
      for(int i=0;i<=n;i++){
          int currHeight= (i==n? 0:heights[i]);
          while(!st.empty() && currHeight<heights[st.top()]){
            int h=heights[st.top()];
            st.pop();
            int width;
            if(st.empty())width=i;
            else  width=i-st.top()-1;

            maxArea=max(maxArea,h*width);
          } 
          
          st.push(i);
      }//3 1 2 
      return maxArea;
}

vector<int> nextSmallElement(vector<int>&heights ,int n){
      vector<int>ans(n);
      stack<int>s;
      s.push(-1);
      for(int i=n-1;i>=0;i--){
          int curr=heights[i];
          while(s.top()!=-1 && curr<=heights[s.top()]){
              s.pop();
          }
          ans[i]=s.top();
          s.push(i);
      }//2,1,3,4
      return ans;
}

vector<int> prevSmallElement(vector<int>&heights ,int n){
      vector<int>ans(n);
      stack<int>s;
      s.push(-1);
      for(int i=0;i<n;i++){
          int curr=heights[i];
          while(s.top()!=-1 && curr<=heights[s.top()]){
              s.pop();
          }
          ans[i]=s.top();
          s.push(i);
      }///2,1,3,4
      return ans;
}

int largestRec(vector<int>heights){

    int n=heights.size();
    
    vector<int>next(n);
    next=nextSmallElement(heights,n);
     
    vector<int>prev(n);
    prev=prevSmallElement(heights,n);



    int maxArea=INT_MIN;
    for(int i=0;i<n;i++){
        int l=heights[i];
        if(next[i]==-1) 
           next[i]=n;
        int b=next[i]-prev[i]-1;

        int newArea=l*b;
        maxArea=max(maxArea,newArea);
    
    }

    return maxArea;
}




int main(){
    vector<int> heights = {2,1,5,6,2,3};

    cout << largestRectangle(heights) << endl;  // Single-pass solution
    cout << largestRec(heights) << endl;        // NSL/NSR solution

    return 0;
}
