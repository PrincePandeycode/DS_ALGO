#include<bits/stdc++.h>
using namespace std;

void fibo(int n){
    int first = 1;
    int second = 1;
    cout<< "1 1 ";

    for(int i = 0;i<n-2;i++){
        int sum = first+second;
        cout<< sum <<" ";
        first = second;
        second = sum;
    }
    return;
}

int main(){
    int n ;
    cin>>n;
    fibo(n);
    return 0;
}