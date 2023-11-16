#include<bits/stdc++.h>
using namespace std;

vector<int> RearrangebySign(vector<int>&v,int n){
    vector<int> pos,neg;
    for(int i = 0;i<n;i++){
        if(v[i]>0) pos.push_back(v[i]);
        else neg.push_back(v[i]);
    }

    if(pos.size()<neg.size()){
        for(int i = 0;i<pos.size();i++){
            v[i*2] = pos[i];
            v[i*2+1] = neg[i];
        }
       int index = pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            v[index] = neg[i];
            index++;
        }
    }
    else{
        for(int i = 0;i<neg.size();i++){
              v[i*2] = pos[i];
            v[i*2+1] = neg[i];
        }
        int index = neg.size()*2;
        for(int i = neg.size();i<pos.size();i++){
            v[index] = pos[i];
            index++;
        }
    }
    return v;
}

int main(){

    vector<int> v = {-1,2,3,8,-3,1};
     for(auto it: v){
        cout<<it<<" ";
    }
    int n = v.size();
    cout<<"\n";
    vector<int> ans = RearrangebySign(v,n);
    for(auto it: ans){
        cout<<it<<" ";
    }
}