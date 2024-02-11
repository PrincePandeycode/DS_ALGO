#include<bits/stdc++.h>
using namespace std;

int calculatetime(vector<int>&v, int hours){
    int ans = 0;
    for(int i = 0;i<v.size();i++){
        ans+= ceil((double)v[i]/(double)(hours));
    }
    return ans;
}

int minrateToEat(vector<int>&v, int h){
   int maxi = *max_element(v.begin(),v.end());

    int low = 1;
    int high = maxi;
    int ans = maxi;

    while(low<=high){
        int mid = (low+high)/2;

        int timetaken = calculatetime(v,mid);

        if(timetaken<=h){
            ans = min(ans,mid);
            high= mid-1;
        }
        else low = mid+1;
    }
    return ans;
}

int main(){
    vector<int> bananas = {3,6,7,11};

    int h = 8;

    int ans = minrateToEat(bananas,h);

    cout<<ans;
}