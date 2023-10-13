//backtracking

#include<bits/stdc++.h>
using namespace std;

void printn(int n){
    
    if(n<1) return;
    printn(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    printn(n);
}
