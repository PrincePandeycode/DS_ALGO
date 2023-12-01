


#include <bits/stdc++.h>
using namespace std;

int subarraysWithXorK(vector<int> a, int k) {
    int n = a.size(); //size of the given array.
    int count = 0;
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            int xoor = 0;
            for(int k = i;k<=j;k++){
                xoor ^= a[k];
              
            }
              if(xoor == k) count++;
        }
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
