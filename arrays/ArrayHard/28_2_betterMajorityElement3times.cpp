#include<bits/stdc++.h>
using namespace std;

vector<int> majority3(vector<int> v){
    int n= v.size();
    vector<int> ans;
   map<int,int> mpp;
    int min = (int)(n/3)+1;
    for(int i = 0;i<n;i++){
        mpp[v[i]]++;
        if(mpp[v[i]] == min) ans.push_back(v[i]);
        if(ans.size() == 2) break;
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int> v = {1,1,1,2,2,3,3,3};
    vector<int> ans = majority3(v);

    for(auto it : ans){
        cout<<it<<" ";
    }
}