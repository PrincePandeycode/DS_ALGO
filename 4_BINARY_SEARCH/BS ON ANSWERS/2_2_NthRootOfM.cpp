#include<bits/stdc++.h>
using namespace std;


int multi(int n,int m,int mid){
    long long ans = 1;

    for(int i = 1;i<=n;i++){
        ans = ans *mid;
        if(ans>m) return -1;

    }
    if(ans == m) return 1;
    else return 0;

}
int findval(int n,int m){
    int low = 1;
    int high = m;

    while(low<=high){
        long long mid = (low+high)/2;

        int val = multi(n,m,mid);
        if(val == 1) return mid;
        else if(val == 0) low = mid+1;
        else high = mid -1;
    }
    return -1;
}
int main(){
    int n = 3;
    int m = 64;

    int ans = findval(n,m);

    cout<<ans;
}