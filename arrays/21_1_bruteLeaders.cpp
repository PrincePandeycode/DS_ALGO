#include<bits/stdc++.h>
using namespace std;

vector<int> Leaders(vector<int>&v){
    int n = v.size();
    vector<int> ans;
    for(int i = 0;i<n;i++){
        bool leader = true;
        for(int j = i+1;j<n;j++){
            if(v[i]<v[j]){
                leader = false;
                break;
            }
            
        }
               if(leader == true)  ans.push_back(v[i]);
    }
    return ans;
}

int main(){
    vector<int> v = {10,22,12,3,0,6};
    vector<int> ans = Leaders(v);
    for(auto it : ans){
        cout<<it<<" ";
    }
}