#include<bits/stdc++.h>
using namespace std;

 int findSubString(string str)
    {
         vector<int> count(256,0);
         
         int first = 0,second = 0,len = str.size() , diff = 0;
         
         while(first<str.size()){
             if(count[str[first]] == 0){
                 diff++;
                 count[str[first]]++;
                 
             }
             
             first++;
         }
         
         first = 0;
         
         for(int i = 0;i<256;i++) count[i] = 0;
         
         
         while(second<str.size()){
             
             while(second< str.size() && diff ){
                 
                 if(count[str[second]] == 0){
                     diff--;
                 }
                     count[str[second]]++;
                     
                 
                 second++;
             }
             
             len = min(len, second-first);
             
             while( first <str.size() && diff!=1 ){
                 len = min(len, second-first);
                 count[str[first]]--;
                 
                 if(count[str[first]] == 0){
                     diff++;
                 }
                 
                 
                 first++;
             }
             
            
         }
         return len;
    }

int main(){

    string s="AABBBCBBAC";

    // int ans = findSubString(s);

    cout<< findSubString(s);

    return 0;

}