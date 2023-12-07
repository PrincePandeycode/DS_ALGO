


#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>& nums) {
    int n = nums.size();
       int maxi= INT_MIN;
       for(int i= 0;i<n;i++){
         int product =1;
         for(int j= i;j<n;j++){
           product *= nums[j];
           maxi = max(product,maxi);
         }
       }
       return maxi;
}

int main() {
    vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    return 0;
}

