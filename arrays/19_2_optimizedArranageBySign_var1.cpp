#include<bits/stdc++.h>
using namespace std;
vector<int> Rearrange(vector<int>&v){
    int n = v.size();
    vector<int> ans(n);
    int pos = 0;
    int neg = 1;

    for(int i = 0;i<n;i++){
            if(v[i]>0){
                ans[pos] = v[i];
                pos = pos+2;

            }
            else{
                ans[neg] = v[i];
                neg +=2;

            }
    }
    return ans;
}
int main(){
      vector<int> v = {1,2,-1,-3,5,-9};
   vector<int> ans = Rearrange(v);

   for(auto it: ans){
    cout<<it<<" ";
   }
}