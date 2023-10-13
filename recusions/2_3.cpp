#include<bits/stdc++.h>
using namespace std;

void printr(int n){
    if(n < 1) return;
    cout<< n<<endl;
    printr(n-1);
}
int main(){

    int n;
    cin>>n;
    printr(n);
}