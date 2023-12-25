#include<bits/stdc++.h>
using namespace std;

int FindEL(int row,int col){
  row = row-1;
  col = col-1;

  int res = 1;
  for(int i = 0;i<col;i++){
    res = res*(row-i);
    res = res/(i+1);
  }
  return res;
}

int main(){
  int row = 5;
  int col = 3;

  int res = FindEL(row,col);

  cout<<res;
}