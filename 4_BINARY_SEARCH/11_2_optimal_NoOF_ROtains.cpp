#include<bits/stdc++.h>
using namespace std;

int Rotations(vector<int>& arr){
    int n  = arr.size();
    int ind = -1;
    int ans = INT_MAX;
    int low = 0;
    int high = n-1;
    while (low<=high)       
    {
       int mid = (low+high)/2;

       if(arr[low]<= arr[mid]){
        if(arr[low]<ans){
            ans = arr[low];
            ind = low;
        }
        low = mid+1;
       }
       else{
        if(arr[mid]<ans){
            ans = arr[mid];
            ind = mid;
        }
        high = mid-1;
       }
    }
    return ind;
    
}

int main(){
    vector<int> arr = {4,5,1,2,3};
    int ans = Rotations(arr);

    cout<<ans;
}