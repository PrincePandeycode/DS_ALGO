#include<bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> v, int k){
    int maxlen = 0;
    long long sum;
    int n = v.size();
    map<long long, int> preSumMap;

    for(int i = 0;i<n;i++){

        sum +=v[i];
        if(sum == k){
            maxlen = max(maxlen,i+1);
        }

        long long rem = sum -k;
        if(preSumMap.find(rem) != preSumMap.end()){ // if rem is present the it will point to some element not to end.  so the condition means that  if rem doesn't points to end
            int len = i - preSumMap[rem];
            maxlen = max(maxlen,len);
        }

        if(preSumMap.find(rem) == preSumMap.end()){//if rem is not in map then only store in map otherwise not  (here map is telling that rem is not there because presumMap.find(rem) only points to end(). if rem is not in map remeber!(map property)
           preSumMap[sum] = i;
        }

    }
    return maxlen;
}

int main(){
    vector<int> v = {1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    int len = getLongestSubarray(v,k);

    cout<<"the longest subarray "<<len;
}