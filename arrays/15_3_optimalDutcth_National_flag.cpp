#include<bits/stdc++.h>
using namespace std;

void DutchNationalFlagAlgo(vector<int>&v){

    int n  = v.size();
    int low = 0;
    int high = n-1;
    int mid = 0;

    
     while(mid<=high){
         if(v[mid] == 0) {
            swap(v[mid],v[low]);
            low++;
            mid++;
        }
        else if(v[mid] == 1){
            mid++;
        }
        else{
            swap(v[mid],v[high]);
            high--;
        }
     }
    
}
int main(){
    vector<int> v = {0,1,2,0,1,2,1,2,0,0,0,1};

    DutchNationalFlagAlgo(v);
      for(auto it : v){
        cout<<it<<" ";
      }

      //just for github
}