#include<bits/stdc++.h>
using namespace std;

int AppearOnce(vector<int> v){
    int xor1 = 0;
    for(int i = 0;i<v.size();i++){
        xor1 = xor1 ^ v[i];
    }
    return xor1;
}

int main(){

    vector<int> v = {1,2,2,3,3,4,4,5,5};
    int Once = AppearOnce(v);
    cout<<Once <<" has appear once";
}