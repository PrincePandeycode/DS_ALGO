#include<bits/stdc++.h>

using namespace std;


int upperB(vector<int>&arr,int n,int k){
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low<= high){
        int mid = (low+high)/2;
        if(arr[mid]>k){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}

int lowerB(vector<int>&arr,int n,int k){

    int low = 0;int high = n-1;
    int ans = n;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=k){
            ans = mid;
            high = mid-1;
        }
        else low= mid+1;
    }
    return ans;
    
}

pair<int,int> firstAndLastPosition(vector<int>&arr,int n,int k){
    int ind1 = upperB(arr,n,k);
    int ind2 = lowerB(arr,n,k);

    if(ind2 == n|| arr[ind2]!=k) return{-1,-1};
    ind1 = ind1-1;

  return {ind2,ind1};
}

int main()
{
    vector<int> arr =  {2, 4, 6, 8, 8, 8, 11, 13};
    int n = 8, k = 8;
    pair<int, int> ans = firstAndLastPosition(arr, n, k);
    cout << "The first and last positions are: "
         << ans.first << " " << ans.second << "\n";
    return 0;
}
