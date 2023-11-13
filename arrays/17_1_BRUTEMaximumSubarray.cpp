#include<bits/stdc++.h>
using namespace std;

int MaximumSum(vector<int>&v){
        int n = v.size();
         int maxsum = INT_MIN;

        for(int i = 0; i<n;i++){
            int sum = 0;
           
            for(int j = i;j<n;j++){
                sum = sum +v[j];
                maxsum = max(sum,maxsum);
            }
        }
        return maxsum;
}

int main(){
    vector<int> v = {-2,-3,4,-1,-2,1,5,-3};
    int k = MaximumSum(v);

    cout<<k;
}