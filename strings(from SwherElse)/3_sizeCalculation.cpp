#include<bits/stdc++.h>
using namespace std;

int sizeCal(string s){
    int count = 0;
    while(s[count] != '\0'){
        count++;
    }
    return count;
}

int main(){
    string s ;
    getline(cin,s);

    int ans = sizeCal(s);

    cout<<ans;

 
}