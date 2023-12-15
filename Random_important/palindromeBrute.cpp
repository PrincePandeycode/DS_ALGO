#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
    string mystr = to_string(x);
        return mystr == string(mystr.rbegin(), mystr.rend());
  
    }
    };