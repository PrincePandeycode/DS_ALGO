#include<bits/stdc++.h>
using namespace std;
int Longest(vector<int>&v){
    int n = v.size();
    if(n == 0) return 0;
    unordered_set<int> st;
    int longest = 1;
    int count = 0;

    for(int i = 0;i<n;i++){
        st.insert(v[i]);
    }
    for(auto it : st){
        if(st.find(it-1) == st.end()){
            count = 1;
            int x = it;
            while(st.find(x+1) !=st.end()){
                count = count+1;
                x = x+1;
            }

        }
        longest = max(longest,count);
    }
    return longest;
}
int main(){
    vector<int> v = {100,102,100,101,101,4,3,2,3,2,1,1,1,2};

    int ans = Longest(v);
    cout<<"The longest sequence is "<<ans;
}