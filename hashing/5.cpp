#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // char arr[n];     OR
    string s ;
    getline(cin,s);


    map<char,int> mpp;
    for(int i = 0;i<s.size();i++){
        mpp[s[i]]++;
    }

    for(auto it: mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    // taking queries
    int q;
    cout<<"how many queries you want "<<endl;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<mpp[c]<<endl;
    }

}