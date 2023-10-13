//backtracking

#include<bits/stdc++.h>
using namespace std;

void printn(int n,int count){
    
    if(n<1) return;
    printn(n-1,count+1);
    cout<<count<<endl;
}

int main(){
    int n;
    cin>>n;
    printn(n,1);
}
