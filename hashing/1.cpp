#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) cin>>arr[i];

    //hash array creation , suppose we have a max size of say 13 so we make a array of 13

    int hash[100000] = {0};     //here the limit is 100000 not 1e6 but 1e5 
    for(int i = 0;i<n;i++){
        hash[arr[i]] = hash[arr[i]]+1;
    }

    int q;
    cout<<"how many queries you wnat"<<endl;
    cin>>q;
    while(q--){
        cout<<"enter"<<q<<" ";
        int num;
        cin>>num;
        //fetch
       cout<<" ans"<< hash[num]<<endl;
    }
    return 0;

}