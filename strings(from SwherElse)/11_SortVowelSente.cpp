#include<bits/stdc++.h>
using namespace std;

    string sortVowels(string s) {
        int n = s.size();
        vector<int> lower(26,0);
        vector<int> upper(26,0);

        for(int i = 0 ;i<n;i++){
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                upper[s[i] - 'A']++;
                s[i] = '#';
            }
            else if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                lower[s[i] - 'a']++;
                s[i] = '#';
            }
            else continue;
        }

            string sortstring;

          for(int i = 0;i<26;i++){
             char c = 'A'+i;
            while(upper[i]){
               
                sortstring += c;
                upper[i]--;
            
          
            }
          }

           for(int i = 0;i<26;i++){
             char c = 'a'+i;
            while(lower[i]){
               
                sortstring += c;
                lower[i]--;
              
            }
           
          }

            int first = 0,second = 0;
            while(first < n){
                if(s[first] == '#'){
                    s[first] = sortstring[second];
                    second++;

                }
                first++;
            }

    return s;
        
    }


int main(){

    string s = "aioeuAeBc";
    cout<<s<<endl;
    string ans = sortVowels(s);

    cout<<ans;


}