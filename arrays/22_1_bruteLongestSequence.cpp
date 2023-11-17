#include<bits/stdc++.h>
using namespace std;
bool linearSearch(vector<int>&v, int next){
    int n = v.size();
    for(int i =0;i<n;i++){
        if(v[i] == next){
            return true;
        }
    }
    return false;
}

int LongestSeq(vector<int>&v){
    int n = v.size();
    if(n==0) return 0;
    int longest = 1;
    for(int i = 0;i<n;i++){
        int element = v[i];
        int count = 1;
        while(linearSearch(v,element+1) == true){
            count++;
            element = element+1;
        }
        longest = max(longest,count);
    }
    return longest;
        
}

int main(){
    vector<int> v = {102,4,100,1,101,3,2,1,1};

    int ans = LongestSeq(v);

    cout<<"the longest Sequence is "<<ans;
}