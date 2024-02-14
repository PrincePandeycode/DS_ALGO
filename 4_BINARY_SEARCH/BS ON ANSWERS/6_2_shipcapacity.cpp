#include<bits/stdc++.h>
using namespace std;

int findD(vector<int>&v,int cap){
    int day = 1;
    int load = 0;

    for(int i = 0;i<v.size();i++){
        if(load + v[i]<= cap){
            load += v[i];
        }
        else{
            day++;
            load = v[i];

        }
    }
    return day;
}

int LeastCap(vector<int>& weights, int days){
    int maxi = *max_element(weights.begin(),weights.end());
    int sum = accumulate(weights.begin(),weights.end(),0);
   int low = maxi;
   int high = sum;

   while(low<= high){
    int mid = (low+high)/2;
    int ans = findD(weights,mid);

    if(ans<= days){
        high = mid -1;

    }
    else  low = mid+1;
   }
   return low;
}
int main(){
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    int ans = LeastCap(weights,days);

    cout<<"the ccapacity should be "<<ans<<" kgs to ship within "<<days<<" days";
    return 0;
}