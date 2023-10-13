#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) cin>>arr[i];

    //precomputation
    unordered_map<int,int> mpp;
    for(int i = 0;i<n;i++){
        mpp[arr[i]]++;

    }

    for(auto it : mpp){
        cout<<it.first<< " -> "<<it.second<<endl;;
    }
    int max_elem = 0;
    int max_freq = 0;
    int min_elem = 0;
    int min_freq = INT_MAX;
    for(auto it : mpp){
        if(it.second>max_freq){
            max_freq = it.second;
            max_elem = it.first;
        }
        if(it.second<min_freq){
            min_freq = it.second;
            min_elem = it.first;
        }
    }
     cout<<"max element"<<max_elem<<"  => max Frequency "<<max_freq<<endl;
       cout<<"min element"<<min_elem<<"  => max Frequency "<<min_freq<<endl;

}