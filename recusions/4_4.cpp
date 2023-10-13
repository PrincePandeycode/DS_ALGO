#include<bits/stdc++.h>
using namespace std;

int check(int p,string s, int n){
    if(p>=n/2) return true;

    if(s[p] != s[n-p-1]) return false;
   return check(p+1,s,n);

}

int main(){
    string s ;
    int n;
    getline(cin,s);
    // n = s.length();
    n = s.size();
    bool res = check(0,s,n);
    if(res) cout<<"palindrome";
    else cout<<"not a palindrome";
}