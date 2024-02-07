#include<bits/stdc++.h>
using namespace std;

int findsqrt(int n){
    int ans = 1;
   for(int i = 1;i<=1;i++){

    if((i*i)<=n){
        ans = i;
    }
    else break;
       
   }
    
    return ans;
}

int main(){
    int n = 7;
   for(int i = 0;i<n;i++)
   { 
    int n ;
    cin>>n;

    int ans = findsqrt(n);
     cout<<ans;
    }

   //not written optimal here
   
}