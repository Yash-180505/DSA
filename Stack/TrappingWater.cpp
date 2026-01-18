#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    stack<int> st;
    int water = 0;

    for(int i=0;i<n;i++){
        while(!st.empty() && height[i] > height[st.top()]){
            int mid = st.top();
            st.pop();

            if(st.empty()) break;

            int left = st.top();
            int width = i - left - 1;
            int boundedHeight = min(height[i], height[left]) - height[mid];

            water += width * boundedHeight;
        }
        st.push(i);
    }
    return water;
}

int main(){
    vector<int> height = {4,2,0,3,2,5};
    cout << trap(height);
    return 0;
}
