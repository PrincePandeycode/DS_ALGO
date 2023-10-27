#include<bits/stdc++.h>
using namespace std;

string TwoSum(vector<int> v, int target){
    int n = v.size();
    int p,q;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i == j) continue;
            if(v[i]+v[j] == target){
                return "yes";
               
            }
        }
    }
    return "no";
}

int main(){
    vector<int> v = {2,8,5,8,11};
    int target = 14;
    string res = TwoSum(v,target);

    cout<<res;

}