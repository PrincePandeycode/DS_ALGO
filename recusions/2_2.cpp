#include<bits/stdc++.h>
using namespace std;

void printn(int n, int count){
    cout<<count<<endl;
    if(count == n) return;
    printn(n,count+1);
}

int main(){
    int n;
    cin>>n;
    printn(n,1);
}
