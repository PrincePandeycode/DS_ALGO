#include<bits/stdc++.h>
using namespace std;

string reverse(string s){
    int start = 0,end = s.size()-1;

    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;
}

int main(){
    string s ;
    getline(cin,s);

    string ans = reverse(s);

    cout<<ans;

 
}