#include <bits/stdc++.h>
using namespace std;

int longestSubstringWithoutRepeating(string s) {
   vector<bool> chars(256,0);

        int first = 0,second = 0, len = 0;

        while(second<s.size()){

            while(chars[s[second]]){
               chars[s[first]] = 0;
                first++;
            }

            chars[s[second]] = 1;

            len = max(len,second-first+1);

            second++;
        }
        return len;
}

int main() {
    string s = "abcabcbb";
    cout << "Length of the longest substring without repeating characters: " 
         << longestSubstringWithoutRepeating(s) << endl;
    return 0;
}
