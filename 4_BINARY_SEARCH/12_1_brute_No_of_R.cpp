#include<bits/stdc++.h>
using namespace std;

int Rotations(vector<int>& nums){
    int n  = nums.size();
    int ind = -1;
    int ans = INT_MAX;
    for(int i = 0;i<n;i++){

        if(nums[i]<ans){
            ans = nums[i];
            ind = i;
        }

    }
    return ind;
}

int main(){
    vector<int> arr = {4,5,1,2,3};
    int ans = Rotations(arr);

    cout<<ans;
}