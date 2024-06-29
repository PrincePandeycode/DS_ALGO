#include <bits/stdc++.h>
using namespace std;

int longestSubstringWithoutRepeating(string s) {
    int maxLength = 0;
    int n = s.length();

    for (int i = 0; i < n; ++i) {
        unordered_set<char> seen;
        for (int j = i; j < n; ++j) {
            if (seen.find(s[j]) != seen.end()) {
                break;
            }
            seen.insert(s[j]);
            maxLength = max(maxLength, j - i + 1);
        }
    }

    return maxLength;
}

int main() {
    string s = "abcabcbb";
    cout << "Length of the longest substring without repeating characters: " 
         << longestSubstringWithoutRepeating(s) << endl;
    return 0;
}
