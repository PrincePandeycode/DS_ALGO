
#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int x, int n) {
   int high = n-1;
   int low = 0;
   int ans = n;
   while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]>x){
        ans = mid;
        high = mid-1;
    }
    else low = mid+1;
   }
   return ans;
}

int main()
{
    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int n = 6, x = 9;
    // int ind = upperBound(arr, x, n);
    int ind = upper_bound(arr.begin(),arr.end(),x)-arr.begin();
    cout << "The upper bound is the index: " << ind << "\n";
    return 0;
}
