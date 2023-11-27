#include<bits/stdc++.h>
using namespace std;

vector<int> majority3(vector<int> v){
    int n= v.size();
    vector<int> ans;
    for(int i = 0;i<n;i++){
        if(ans.size() == 0 || ans[0]!=v[i]){
            int count = 0;
            for(int j = 0;j<n;j++){
                if(v[i] == v[j]) count++;
            }
            if(count>(n/3)) ans.push_back(v[i]);
        }
        if(ans.size() == 2) break;
    }
    return ans;
}

int main(){
    vector<int> v = {1,1,1,2,2,3,3,3};
    vector<int> ans = majority3(v);

    for(auto it : ans){
        cout<<it<<" ";
    }
}