#include<bits/stdc++.h>
using namespace std;
int MajorityElem(vector<int>&v, int n){
    int elem;
    int count = 0;
    for(int i = 0;i<n;i++){

        if(count == 0){
            count = 1;
            elem = v[i];
        }
        if(elem == v[i]){
            count++;
        }
        else{
            count--;
        }
    }

    //if question states that question has a majority element then this step is not needed;
    // if we have to check if it occurs more than half times, then this is necesary;

    int count1 = 0;
    for(int i = 0;i<n;i++){
        if (elem = v[i]) count1++;

    }
    if(count1 > (n/2)) return elem;

    return -1;
}

int main(){
    vector<int> v = {1,1,9,3,4,5,9,9,6,9,8,8,9,9,9,9,9,9,9};
    int n = v.size();
    
    int k = MajorityElem(v,n);
    cout<<"Majority elem  : "<<k;


}