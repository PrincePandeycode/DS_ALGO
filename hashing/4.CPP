#include<bits/stdc++.h>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i  = 0;i<n;i++){
        cin>>arr[i];
    }

    //precomputation
    map<int,int> mpp;
    for(int i = 0;i<n;i++){
        mpp[arr[i]]++;  //we can done this step while taking the values of array in upper for loop
    }
        //we can also iterate the map as follows:
        for(auto it: mpp){
            cout<<it.first<<" -> "<<it.second<<endl;
        }
    // taking queries
    cout<<"ho many queries you want";
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        cout<<mpp[n]<<endl;

    }

 }