#include<bits/stdc++.h>
using namespace std;

int majority(vector<int>&v){
    int n = v.size();
    
    for(int i= 0;i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(v[i] == v[j]) count++;
        }
                                                            //time complexcity O(n^2)
        if(count > (n/2)) return v[i];
        
    }
    return -1;
}
int main(){
    vector<int> v = {2,4,4,4,4,4,3,2,4};
    int n = majority(v);
    cout<<n;
}