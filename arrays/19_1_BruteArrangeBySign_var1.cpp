#include<bits/stdc++.h>
using namespace std;

vector<int> Rearrange(vector<int>&v){
    int n = v.size();

    vector<int> pos;
    vector<int> neg;
    for(int i = 0;i<n;i++){
        if(v[i]>0) pos.push_back(v[i]);
        if(v[i]<0) neg.push_back(v[i]);
    }

    for(int i = 0;i<n/2;i++){
      v[i*2] = pos[i];
      v[i*2+1] = neg[i];
    }

    return v;

}

int main(){
    vector<int> v = {1,2,-1,-3,5,-9};
   vector<int> ans = Rearrange(v);

   for(auto it: ans){
    cout<<it<<" ";
   }
}