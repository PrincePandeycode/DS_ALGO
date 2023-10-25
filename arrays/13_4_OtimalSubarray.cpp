#include<bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> v, int k){
    int n = v.size();
    int left = 0;
    int right = 0;
    long long sum = v[right];
    int maxLen = 0;
    
    while(right<n){

        if(left<=right && sum>k){
            sum -=v[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right-left+1);
        }

        right++;
        if(right<n){

        sum += v[right];
        }
    }
    return maxLen;
}

int main(){
    vector<int> v = {1,2,3,1,1,1,1,4,2,3};
    int k = 5;
    int len = getLongestSubarray(v,k);

    cout<<"the longest length is "<< len;

}