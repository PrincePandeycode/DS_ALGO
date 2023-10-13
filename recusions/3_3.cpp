#include<bits/stdc++.h>
using namespace std;

//functional way
int fact2(int n){
    if (n== 0) return 1;
    return(n*fact2(n-1));
}

//parameterized way
void fact(int n, int factorial){
    if (n<0) return;
    else{
        if(n == 1){
            cout<<factorial;
            return;
        }
        else{
            fact(n-1,factorial*n);
        }
    }
}

 int main(){
    int n;
    cin>>n;
    // cout<<fact(n);
    fact(n,1);
 }