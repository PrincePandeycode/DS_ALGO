#include<bits/stdc++.h>
using namespace std;

int search(vector<int>&a , int n , int k ){
    for(int i = 0;i<n;i++){
        if(a[i] == k) return i;
    }
    return -1;
}

int main(){
    vector<int> a = {7,8,9,1,2,3,4,5,6};
    int n = a.size();
    int target = 2;
    int ans = search(a,n,target);
    cout<<ans;
}
