
#include <bits/stdc++.h>
using namespace std;

int nCr(int nn, int rr) {
    int n = nn-1;
    int r = rr-1;
    long long res = 1;

  for(int i = 0;i<r;i++){
     res *=(n-i);
    res /=(i+1);
  }
    return res;
}



int main()
{
    int r = 5; // row number
    int c = 3; // col number
    int element = nCr(r, c);
    cout << "The element at position (r,c) is: "
            << element << "n";
    return 0;
}
        