#include<bits/stdc++.h>
using namespace std;

int AppearOne(vector<int> v){
    
    for(int i = 0;i<v.size();i++){
        int num = v[i];
        int count = 0;
        for(int j = 0;j<v.size();j++){
            if(v[j] == num){
                count++;
            }
        }
        if(count == 1){
            return v[i];
        }

    }
    return -1;
}

int main(){
    vector<int> v = {1,1,2,2,3,4,4};

    int Onec = AppearOne(v);

    cout<<Onec <<" has appears once";
}