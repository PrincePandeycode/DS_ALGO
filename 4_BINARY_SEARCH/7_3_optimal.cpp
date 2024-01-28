
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

int main()
{
    vector<int> arr =  {2, 4, 6, 8, 8, 8, 11, 13};
    int n = 8, k = 8;
    pair<int, int> ans = firstAndLastPosition(arr, n, k);
    cout << "The first and last positions are: "
         << ans.first << " " << ans.second << "\n";
    return 0;
}
