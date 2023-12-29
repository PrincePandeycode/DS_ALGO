
#include <bits/stdc++.h>
using namespace std;

   int binarysearch(vector<int>&arr, int low, int high, int target){
        if(low>high) return -1;
        int mid = (low+high)/2;

        if(arr[mid] == target) return mid;
        else if(arr[mid]>target) return binarysearch(arr,low,mid-1,target);
        else return binarysearch(arr,mid+1,high,target);

        return -1;
    }
   
    int search(vector<int>& nums, int target) {
        return binarysearch(nums,0,nums.size()-1,target);
   
    }

int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int ind = search(a, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "
                  << ind << endl;
    return 0;
}
