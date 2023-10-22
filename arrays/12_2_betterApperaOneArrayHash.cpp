#include<bits/stdc++.h>
using namespace std;

int AppearOne(vector<int> v){

    int maxElem = 0;
    for(int i = 0;i<v.size();i++){
        maxElem = max(maxElem,v[i]);
    }

    int hash[maxElem] = {0};

    for(int i = 0; i<v.size();i++){
        hash[v[i]]++;
    }

    for(int i = 0;i<v.size();i++){
        if(hash[v[i]] == 1){
            return v[i];
        }
    }
    return -1;
}

int main(){

    vector<int> v = {1,1,2,2,3,4,4};
    int Once = AppearOne(v);
    cout<<Once<<" has appeared once";
}