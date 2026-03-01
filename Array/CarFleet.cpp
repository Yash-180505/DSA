#include<bits/stdc++.h>
using namespace std;

int carFleet(vector<int>position,vector<int>speed,int target){
     int n=position.size();
     vector<pair<int,double>>cars;
     for(int i=0;i<n;i++){
           double time=(double)(target-position[i])/speed[i];
           cars.push_back({position[i],time});

     }
     sort(cars.begin(),cars.end());


     int fleet=0;
     double prevTime=0;
     for(int i=n-1;i>=0;i--){
         if(cars[i].second>prevTime){
               fleet++;
               prevTime=cars[i].second;
         }
     }
     return fleet;


}
int main(){
     vector<int>position={10,8,0,5,3};
     int target=12;
     vector<int>speed={2,4,1,1,3};

     int fleet=carFleet(position,speed,target);
     cout<<"Number of Fleet:"<<fleet<<endl;

}