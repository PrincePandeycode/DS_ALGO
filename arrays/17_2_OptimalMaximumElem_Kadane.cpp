#include<bits/stdc++.h>
using namespace std;

int MaximumSum(vector<int>&v){ //kadane algo
    int n = v.size();
    int maxsum = INT_MIN;
    int sum = 0;

   for(int i = 0;i<n;i++){
        sum = sum +v[i];
        if(sum>maxsum) maxsum = sum;

        if(sum<0){
            sum = 0;
        }
   }

   //if question states empty array if the sum is in negative returns zero then first compare then return (NOT NECESSARY)
   if(maxsum<0) maxsum = 0;
   return maxsum;
}

int main(){
     vector<int> v = {-2,-3,4,-1,-2,1,5,-3};
    int k = MaximumSum(v);

    cout<<k;
}