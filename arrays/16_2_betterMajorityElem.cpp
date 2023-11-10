#include<bits/stdc++.h>
using namespace std;

int majority(vector<int>&v){
    int n = v.size();
    map<int,int> mpp;
    //tc == O(n) for traversing array and O(lon n) for storing in mapp
    for(int i = 0;i<n;i++){
        mpp[v[i]]++;

    }

    //tc == O(n) for traversing iin mapp if all elements are unique
    for(auto it : mpp){
        if(it.second > (n/2)) return it.first;
    }
    return -1;
}

int main(){
    vector<int> v = {2,2,3,3,1,2,2};
    int n = majority(v);
    cout<<n;
}