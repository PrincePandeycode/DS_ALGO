#include<bits/stdc++.h>
using namespace std;

int maxSubarrays(vector<int> v, int k){
    
        map<int,int> mpp;
        int preSumMap = 0,count = 0;
        mpp[0] = 1;
         for(int i = 0;i<v.size();i++){
            preSumMap += v[i];
            int remove = preSumMap -k;
            count += mpp[remove];
            mpp[preSumMap] +=1;
         }
         return count;
}

int main(){
     vector<int> v= {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3;
    int ans = maxSubarrays(v,k);
    cout<<ans;
}