#include<bits/stdc++.h>
using namespace std;


    int num(char c){
        if(c == 'I') return 1;
        else if( c == 'V') return 5;
        else if( c == 'X') return 10;

        else if( c == 'L') return 50;
        else if(c == 'C') return 100;
        else if(c == 'D') return 500;

        else return 1000;
    }

    int romanToInt(string s) {

        int n = s.size();

        int sum = 0;
        int ind = 0;

        while(ind<n-1){
            if(num(s[ind]) < num(s[ind+1])){
                sum -=num(s[ind]);
                }

            else
            sum += num(s[ind]);

            ind++;
        }

        sum += num(s[n-1]);

        return sum;
        
    }


int main(){
    string s = "LXX";

    int ans = romanToInt(s);
    cout<<ans;
}