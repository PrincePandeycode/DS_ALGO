#include<bits/stdc++.h>
using namespace std;

    string add( string num1,string num2){

        int ind1 = num1.size()-1, ind2 = num2.size()-1;
        int carry = 0;
        int sum = 0;
        string ans;

        while(ind2>=0){
            sum = (num1[ind1] - '0') + (num2[ind2] - '0')+carry;
            carry = sum/10;
            char c = '0'+(sum%10);
            ans += c;
            ind1--;
            ind2--;
        }

        while(ind1>=0){
            sum = (num1[ind1] - '0')+carry;
            carry = sum/10;
            char c = '0'+ (sum%10);
            ans += c;
            ind1--;
        }

        if(carry){
            ans += '0'+1;

        }
        reverse(ans.begin(),ans.end());
         return ans;


    }
    string addStrings(string num1, string num2) {

        if(num1.size()>= num2.size()) 
        {
             return add(num1,num2);
             
        }
         else{
            return add(num2,num1);
         }
        
    }
int main(){
    string num1 = "1234";
    string num2 = "234214";

    string ans = addStrings(num1,num2);

    cout<<ans;
}