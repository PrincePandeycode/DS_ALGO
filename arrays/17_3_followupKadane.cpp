#include<bits/stdc++.h>
using namespace std;

int Majority_indexes(vector<int>&v){
    int n = v.size();
    int Maximum = INT_MIN;
    int sum = 0;
    int start = 0;
    int StartIndex = -1,EndIndex = -1;
    for(int i = 0;i<n;i++){

        if(sum == 0) start = i;
        sum= sum+v[i];
        if(sum>Maximum) {
            Maximum = sum;
            StartIndex = start;
            EndIndex = i;
        }
        if(sum<0) sum = 0;
    }
    cout<<"the sunarray is : [";
    for(int i = StartIndex;i<=EndIndex;i++){
        cout<<" "<<v[i];
    }
    cout<<"]";
    return Maximum;
}
int main(){
    vector<int> v = {-2,-3,4,-1,-2,1,5,-3};
    int k = Majority_indexes(v);
    cout<<"\nthe majority sum is :"<<k;
}