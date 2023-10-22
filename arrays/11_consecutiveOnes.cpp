#include<bits/stdc++.h>
using namespace std;

int MaxOne(vector<int> v){
    int count = 0;
    int maxi = 0;

    for(int i = 0;i<v.size();i++){
        if(v[i] == 1){
            count = count+1;
            maxi = max(count,maxi);
           
        }
        else count = 0;
    }
    return maxi;
}

int main(){

    vector<int> v = {1,1,1,0,1,1,0,1,1,1};
    int one = MaxOne(v);

    cout<<"maximum no of consecutive ones are "<<one;
}