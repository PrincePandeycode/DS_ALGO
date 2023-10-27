#include<bits/stdc++.h>
using namespace std;

vector<int> TwoSumVar2(vector<int> v, int target){
    int n = v.size();
    vector<int> ans;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i == j) continue;
            if(v[i] + v[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> v = {2,3,8,5,6};
    int target = 14;
    vector<int> res;
    res = TwoSumVar2(v,target);

    cout<<"the first index is v["<<res[0]<<"] , second index is v["<<res[1]<<"]";
}