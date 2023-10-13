#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    //precompute
    int hash[256] = {0};
    for(int i = 0; i<s.size();i++){
        hash[s[i]]++;
    }

    //taking query
    int q;
    cout<<"how may times you want to search"<<endl;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
}