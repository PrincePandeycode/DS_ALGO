#include<bits/stdc++.h>
using namespace std;

vector<int> SortARR(vector<int>&v){
    int n = v.size();
    int Count0 = 0;
    int Count1 = 0;
    int Count2 = 0;

    for(int i = 0;i<n;i++){
        if(v[i] == 0) Count0++;
        if(v[i] == 1) Count1++;
        if(v[i] == 2) Count2++;
    }

    for(int i = 0;i<Count0;i++) v[i] = 0;
    for(int i = Count0;i<Count0+Count1;i++) v[i] = 1;
    for(int i = Count0+Count1;i<n;i++) v[i] = 2;

    return v;
}

int main(){
    vector<int> v = {0,1,2,0,1,2,1,2,0,0,0,1};
    vector<int> res;

    res = SortARR(v);

    for(auto it : res){
        cout<<it<<" ";
    }
}