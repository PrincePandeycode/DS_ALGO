#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n == 0) return 1;
    return n*fact(n-1);
}
int FindElement(int rowno,int colno){
    // we will use nCr formula--> so the values start from 0 in row ans col --> so will do 
    // row -1;
    // col-1;

    int n = rowno-1;
    int r = colno-1;
    int nr = n-r;

    // finding nCr = n!/(n-r)!r!;
    int nFact = fact(n);
    int rFact = fact(r);
    int nrFact = fact(nr);
    int ans = nFact/ (nrFact * rFact);

    return ans;


}
int main(){
    int rowno = 5;
    int colno = 3;

    int ans = FindElement(rowno,colno);

    cout<<"the element is "<<ans;
}