
#include <bits/stdc++.h>
using namespace std;

int FirstO(vector<int>&arr, int n, int k){
    int ans = -1;
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == k) {
            high = mid-1;
            ans = mid;

        }
         else if(arr[mid] > k){
            high = mid-1;

        }
        else low = mid+1;
    }
    return ans;

}

int LastO(vector<int>&arr, int n, int k){
     int ans = -1;
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == k){
            low = mid +1;
            ans = mid;

        }   
        else if(arr[mid] < k){
            low = mid+1;
        }
        else high = mid-1;

    }
    return ans;
}



pair<int,int> firstAndLastPosition(vector<int>&arr, int n, int k){
    int first = FirstO(arr,n,k);
    int last = LastO(arr,n,k);

    return {first,last};
}

int count(vector<int>&arr, int n, int k){
   pair<int,int> nums = firstAndLastPosition(arr,n,k);
   if(nums.first == -1 ) return 0;
   

   return((nums.second-nums.first) +1);

}

int main()
{
    vector<int> arr =  {2, 4, 6, 8, 8, 8, 11, 13};
    int n = 8, k = 4;
   int ans = count(arr,n,k);
   cout<<k<<" occurs "<<ans<<" times";
    return 0;
}
