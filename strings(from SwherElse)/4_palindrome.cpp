#include<bits/stdc++.h>
using namespace std;

bool sizeCal(string s){
   int start = 0;
    int end = s.size()-1;
    while(start<end){
        if(s[start] != s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    string s ;
    getline(cin,s);

    bool ans = sizeCal(s);

   if(ans == true) cout<<"it is a palindrome";
   else cout<<"it is not a paindrome";

 
}