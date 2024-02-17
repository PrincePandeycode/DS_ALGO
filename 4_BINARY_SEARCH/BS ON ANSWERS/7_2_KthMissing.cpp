#include<bits/stdc++.h>
using namespace std;

int kth(vector<int>& arr, int k){
   int low = 0;
   int n = arr.size();
   int high = n-1;
   while(low <=high){
    int mid = (low+high)/2;
    int missing = arr[mid]-(mid+1);

    if(missing<k)low = mid+1;
    else high = mid-1;
   }
   return low+k;
}
int main(){
    vector<int> arr = {2,3,4,7,11};
    int k = 5;8

    int ans = kth(arr,k);
    cout<<ans;
    return 0;
}