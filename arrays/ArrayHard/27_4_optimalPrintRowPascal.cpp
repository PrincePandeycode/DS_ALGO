#include<bits/stdc++.h>
using namespace std;

//this is not 0 based indexing . if yo wan to tprint it in 0 based indexing do a increase in row at the begining og the function

void printroe(int row){
    cout<<1<<" ";
    int res = 1;
    for(int i = 1;i<row;i++){
        res = res * (row-i);
        res = res / i;
        cout<<res<<" ";
    }
}

int main(){
    int n = 5;
    printroe(n);
    return 0;
}