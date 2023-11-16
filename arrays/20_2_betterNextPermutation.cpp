#include<bits/stdc++.h>
using namespace std; // best solution in terms to time complecity 
vector<int> NextPermutation(vector<int>&v){
    next_permutation(v.begin(),v.end());
    return v;
}

int main(){
  vector<int> v = {1,2,4,5,3};
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int> ans = NextPermutation(v);
    for(auto it : ans){
        cout<<it<<" ";
    }
}