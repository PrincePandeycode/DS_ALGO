// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

#include<bits/stdc++.h>
using namespace std;
 int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
          ans ^= nums[i];
        }
        return ans;

    }

int main(){
vector<int> v = {1,1,2,3,4,3,4};
int ans = singleNumber(v);
cout<<"Number that appears once is "<<ans;
}