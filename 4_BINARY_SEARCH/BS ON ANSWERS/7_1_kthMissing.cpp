#include<bits/stdc++.h>
using namespace std;

int kth(vector<int>& arr, int k){
    for(int i = 0;i<arr.size();i++){
        if(arr[i]<=k)k++;
        else break;
    }
    return k;
}
int main(){
    vector<int> arr = {2,3,4,7,11};
    int k = 5;

    int ans = kth(arr,k);
    cout<<ans;
    return 0;
}