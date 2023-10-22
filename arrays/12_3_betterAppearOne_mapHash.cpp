#include<bits/stdc++.h>
using namespace std;

int Appearone(vector<int> v){
    map<int,int> mpp;
    for(int i =0 ;i<v.size();i++){
            mpp[v[i]]++;
    }

    for(auto it : mpp){
        if(it.second == 1) return it.first;
    }

    return -1;
}


int main(){
    vector<int> v = {1,1,2,2,3,3,4};

    int one = Appearone(v);
    cout<<one<<" has appear once";
}