#include<bits/stdc++.h>
using namespace std;

string caseSort(string s, int n)
    {
       vector<int> lower(26,0);
       vector<int> upper(26,0);
       for(int i = 0;i<n;i++){
           if(s[i] >= 'A' && s[i]<= 'Z'){
               upper[s[i]-'A']++;
               s[i] = 'U';
           }
           else if(s[i] >= 'a' && s[i]<= 'z'){
               lower[s[i]-'a']++;
               s[i] = 'L';
           }
       }
       
       int l_ind = 0, U_ind = 0;
       
        for(int i = 0;i<n;i++){
            if(s[i] == 'L'){
                while( l_ind < 26 && lower[l_ind] == 0 ) l_ind++;
            if (l_ind < 26) {
                s[i] = 'a' + l_ind;
                lower[l_ind]--;
            }
            }
            
            else if(s[i] == 'U'){
                
                while(U_ind < 26 && upper[U_ind] == 0  ) U_ind++;
               if (U_ind< 26) {
                s[i] = 'A' + U_ind;
                upper[U_ind]--;
            }
            }
        }
       
     
      return s;
    }

int main() {
    string s = "sTringSortExample";
    int n = s.length();
    cout << caseSort(s, n) << endl; // Output: "aEgilmnoprstTSX"
    return 0;
}
