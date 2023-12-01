


#include <bits/stdc++.h>
using namespace std;

int subarraysWithXorK(vector<int> a, int k) {
    int n = a.size(); //size of the given array.
  map<int,int> mpp;
  int xorr = 0;
  int count = 0;
  mpp[xorr]++;
  int PreXorMap = 0;
  for(int i = 0;i<n;i++){
    PreXorMap = PreXorMap ^ a[i];
    int x = PreXorMap ^ k;
    count =count + mpp[x];
    mpp[PreXorMap]++;
    
  }
  return count;
}

int main()
{
    vector<int> a = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = subarraysWithXorK(a, k);
    cout << "The number of subarrays with XOR k is: "
         << ans << "\n";
    return 0;
}
