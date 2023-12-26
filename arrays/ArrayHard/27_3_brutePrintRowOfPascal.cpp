#include<bits/stdc++.h>
using namespace std;

int findel(int row, int col){
    // row-=1;
    // col-=1;
    int res = 1;
    for(int i = 0;i<col;i++){
        res = res * (row-i);
        res = res/(i+1);
    }
    return res;

}

void printrow(int row){
    

    for(int col = 0;col<= row;col++){
        cout<<findel(row,col)<<" ";
    }
}



int main(){
    int n = 5;
     printrow(n);
}