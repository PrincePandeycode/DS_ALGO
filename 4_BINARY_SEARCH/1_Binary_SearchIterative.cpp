#include<bits/stdc++.h>
using namespace std;

int BnarySearch(vector<int>&arr, int target){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid]>target) high = mid-1;
        else low = mid+1;
    }
    return -1;
}
int main(){
     vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
     int target = 6;
     int ans = BnarySearch(a,target);

     cout<<ans;
}