#include<bits/stdc++.h>
using namespace std;

string sort(string s){
  vector<int> alpha(26,0);
  for(int i = 0;i<s.size();i++){
      
      alpha[s[i]-'a']++;
      
      
  }
  string ans;
  
  for(int i = 0;i<alpha.size();i++){
      char toi = i+'a';
      ans.append(alpha[i],toi);
  }
  return ans;
}

int main(){
    string str = "prince";
    string ans = sort(str);
    cout<<ans;
}