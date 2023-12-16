#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
        if(n==1 || n== 2) return 1;
        int first = 1;
        int second = 1;
        int ans = 0;
        for(int i = 2; i<n;i++){
                int third = first+second;
                first = second;
                second = third;
                ans = third;
        }
        return ans;
}

int main() {
  int n;
  cin >> n;
  int ans = fibo(n);
  cout<<ans;
}