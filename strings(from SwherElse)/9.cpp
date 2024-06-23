#include<bits/stdc++.h>
using namespace std;
 int longestPalindrome(string s) {
        int n = s.size();
        vector<int> lower(26,0);
        vector<int> upper(26,0);

        for(int i = 0;i<n;i++){
            if(s[i] >= 'a'){
                lower[s[i] - 'a']++;
            }
            else{
                upper[s[i] - 'A']++;
            }
        }

        bool val = 0;
        int count = 0;

        for(int i = 0;i<26;i++){
            if(upper[i] % 2 == 0){
                count += upper[i];
            }
            else{
                count += (upper[i]-1);
                val = 1;
            }

            if(lower[i] % 2 == 0){
                count += lower[i];
            }
            else {
                count += (lower[i]-1);
                val = 1;
            }
        }
        if(val == 1 ) count++;

        return count;
        
        
    }

int main(){
    string s = "abccccdd";

    int sol = longestPalindrome(s);

    cout<<"the logest palindrome length is "<< sol;
}