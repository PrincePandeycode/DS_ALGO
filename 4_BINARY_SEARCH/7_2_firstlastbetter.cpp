#include<bits/stdc++.h>

using namespace std;


    int lowerbound(vector<int>&nums,int n, int target){
        int low = 0;
        int high = n-1;
        int ans = n;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>=target){
                ans = mid;
                high= mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }
      int upperbound(vector<int>&nums,int n, int target){
           int low = 0;
        int high = n-1;
        int ans = n;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>target){
                ans = mid;
                high= mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int lb = lowerbound(nums, n,target);

        if(lb == n || nums[lb]!= target) return {-1,-1};
        return {lowerbound(nums,n,target),upperbound(nums,n,target)-1};

        
    }

int main()
{
    vector<int> arr =  {2, 4, 6, 8, 8, 8, 11, 13};
    int  k = 11;
    vector<int> ans = searchRange(arr, k);
    cout << "The first and last positions are: "
         << ans[0] << " " << ans[1] << "\n";
    return 0;
}
