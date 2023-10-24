#include<bits/stdc++.h>
using namespace std;

int Longestsubarray(vector<int> v,int k){
    int n = v.size();
    int len = 0;

    for(int i = 0;i<n;i++){
        int sum = 0;
        for(int j = i;j<n;j++){
            sum += v[j];
            if(sum == k){
                len = max(len,j-i+1);
            }
        }
    }
    return len;
}

int main(){
    vector<int> v = {1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    int len = Longestsubarray(v,k);

    cout<<"longest subarray for this is "<<len;
}