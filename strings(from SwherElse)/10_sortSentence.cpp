#include<bits/stdc++.h>
using namespace std;


    string sortSentence(string s) {
    
        vector<string> sent(10," ");

        int n = s.size();

        int ind = 0;
         string temp = "";
         int count = 0;

        while(ind < n){
            if(s[ind] == ' '){
                int pos = temp[temp.size()-1] - '0';
                temp.pop_back();
                sent[pos] = temp;
                temp.clear();
                count++;

            }
            else{
                temp += s[ind];
            }
            ind++;
        }

         int pos = temp[temp.size()-1] - '0';
                temp.pop_back();
                sent[pos] = temp;
                temp.clear();
                count++;

        string ans;

        for( int i = 1;i<=count;i++){
            ans += sent[i];
            ans += " ";
        }
        ans.pop_back();

        return ans;


    }
    

int main(){
    string s = "sentence4 a3 is2 This1";

    string ans = sortSentence(s);

    cout<<ans;
}