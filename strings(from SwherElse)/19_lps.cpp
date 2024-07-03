#include<bits/stdc++.h>
using namespace std;


	int lps(string s) {
	  
	    int pre = 0, suf = 1;
	    vector<int> lps(s.size(),0);
	    
	    while(suf<s.size()){
	        
	        if(s[pre] == s[suf]){
	            lps[suf] = pre+1;
	            pre++;
	            suf++;
	            
	        }
	        else{
	            if(pre == 0){
	                lps[suf] = 0;
	                suf++;
	            }
	            
	            else{
	                pre = lps[pre-1];
	            }
	        }
	        
	        
	    }
	    return lps[s.size()-1];
	    
	}
int main(){

    string s = "abab";
    int res = lps(s);

    cout<<"the longest suffix is :"<<res;

}