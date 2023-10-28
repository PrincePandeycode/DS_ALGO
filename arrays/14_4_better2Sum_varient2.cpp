#include<bits/stdc++.h>
using namespace std;

vector<int> TwoSum(vector<int> v, int target){
    map<int, int> mpp;
    for(int i = 0; i<v.size();i++){
        int Currentnum = v[i];
        int required = target-Currentnum;
        if(mpp.find(required) != mpp.end()){
            return {i,mpp[required]};
        }
        mpp[Currentnum]= i;
    }
    return{-1,-1};
}

int main(){
    vector<int>v = {2,6,5,8,11};
    int target = 14;
    vector<int> res;
    res = TwoSum(v,target);

    sort(res.begin(),res.end());

    cout<<"the indexes are "<<res[0]<<" and "<<res[1];
}