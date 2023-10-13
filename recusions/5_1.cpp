#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
  if(n==0){
    return 0;
  }
  if (n == 1) return 1;
  return(fibonacci(n-1)+fibonacci(n-2));
}

int fibonaaci(int n){
 int sum = 0;
  if(n == 0) return 0;
  if(n == 1) return 1;
  int prev = 0, current = 1;
  for(int i = 2;i<=n;i++){
    
       sum = prev +current;
       prev = current;
       current = sum;
     
  }
   return sum;
}

int main(){

int n;
cin>>n;
int res = fibonacci(n);
cout<<res;
}