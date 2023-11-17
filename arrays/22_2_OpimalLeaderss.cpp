#include<bits/stdc++.h>
using namespace std;

vector<int> Leaders(vector<int>&v){
    int n = v.size();
    int maxi = INT_MIN;
    vector<int> ans;
    for(int i = n-1;i>=0;i--){
       if(v[i]>maxi) ans.push_back(v[i]);
       maxi = max(maxi,v[i]);
    }
    //if asked to return in same order
    reverse(ans.begin(),ans.end());
    // if asked to sort thr answer
    // sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int> v = {10,22,12,0,3,6};

    vector<int> ans = Leaders(v);
    for(auto it : ans){
        cout<<it<<" ";
    }
}