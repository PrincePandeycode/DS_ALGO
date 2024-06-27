#include<bits/stdc++.h>
using namespace std;
string intToRoman(int nums) {
        
        int val[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string romans[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        string ans;

        while(nums>0){

            for(int i = 0;i<13;i++){
                if(nums>=val[i]){
                    nums -= val[i];
                    ans+=romans[i];
                    break;
                }
            }
        }
        return ans;
        
    }

int main(){
    int nums = 234;
    string ans = intToRoman(nums);
    cout<<ans;
}