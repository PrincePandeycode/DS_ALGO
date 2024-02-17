


#include <bits/stdc++.h>
using namespace std;

bool ispossible(vector<int>&stalls, int k, int diff){
    int last = stalls[0];
    int count = 1;

    for(int i = 1;i<=stalls.size();i++){
        if(stalls[i]-last >= diff){
            count++;
            last =stalls[i];
        }

        if(count>=k) return true;
    }
    return false;
}


int aggressiveCows(vector<int>&stalls, int k){
    int n = stalls.size();
    int maxi = stalls[n-1] - stalls[0];

    int ans = 0;
    int low = 0;
    int high = maxi;
    while(low<=high){
        int mid = (low+high)/2;
        if(ispossible(stalls, k,mid) == true){
            ans = mid;
            low = mid+1;
        }
        else high = mid-1;
    }
    return high;
}

int main()
{
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    int ans = aggressiveCows(stalls, k);
    cout << "The maximum possible minimum distance is: " << ans << "\n";
    return 0;
}
