#include<bits/stdc++.h>
using namespace std;

int maxSubarrays(vector<int> v, int k){
    int n = v.size();
    int count = 0;

    for(int i = 0;i<n;i++){
        int sum = 0;
        for(int j = i;j<n;j++){
            sum += v[j];
            if(sum == k) count++;
        }
    }
    return count;
}

int main(){
     vector<int> v= {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3;
    int ans = maxSubarrays(v,k);
    cout<<ans;
}