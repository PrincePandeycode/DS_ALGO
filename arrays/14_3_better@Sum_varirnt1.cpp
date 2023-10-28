#include<bits/stdc++.h>
using namespace std;

string TwoSum(vector<int> v, int target)
{
    map<int,int> mpp;
    for(int i =0;i<v.size();i++){
        int required = target - v[i];
        if(mpp.find(required) != mpp.end()){
            return "yes";
        }

        mpp[v[i]] = i;
    }
    return "no";
}
int main(){
    vector<int> v = {2,6,5,8,11};
    int k = 14;

    string s;
    s = TwoSum(v,k);
    cout<<s;

}
