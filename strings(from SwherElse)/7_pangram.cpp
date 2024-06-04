#include<bits/stdc++.h>
using namespace std;
 bool checkIfPangram(string sentence) {

        int n = sentence.size();
        int count = 0;
       
       vector<bool> ans(26,0);
       for(int i = 0;i<sentence.size();i++){
        if(sentence[i] == 32) continue;
       
            ans[sentence[i]-'a'] = 1;

    }
     for(int i= 0;i<26;i++){
        if(ans[i] == 0) return 0;
     }
     return 1;
    }
int main(){

    string s = "the quick brownfoxjumpsoverthelazydog";
    bool ans = checkIfPangram(s);

    if(ans) cout<<"yes it is an panagram";
    else cout<<"it is not an pangram";
    
}