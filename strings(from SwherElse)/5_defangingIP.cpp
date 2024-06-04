#include<bits/stdc++.h>
using namespace std;

  string defangIPaddr(string address) {
        int index = 0;
        string ans;

        while(index<address.size()){
            if(address[index] == '.'){
                ans = ans+"[.]";
            }
            else ans += address[index];
            index++;
        }
        return ans;
    }

int main(){

    string address = "1.1.1.1";

    string ans = defangIPaddr(address);

    cout<<ans;


}