#include<bits/stdc++.h>
using namespace std;

int multi(int a,int b){
    int ans = 1;

    for(int i = 1;i<=b;i++){
        ans = ans*a;
      
    }
    return ans;
}

int FindRoot(int n, int m){

    for(int i = 1;i<=m;i++){
        int chk = multi(i,n);
        if(chk == m){
            return i;
        }
        else if(chk>m){
            break;
        }
    }
   return -1;
}
int main(){
    int n = 3;
    int m = 64;

    int ans = FindRoot(n,m);

    cout<<ans;
}