#include<bits/stdc++.h>
using namespace std;

long double minimiseMaxDistance(vector<int>&arr, int k){
    int n = arr.size();
    vector<int> howmany(n-1,0);

    for(int gast = 1;gast<=k;gast++){
        long double maxsec = -1;
        int ind = -1;

        for(int i = 0;i<n-1;i++){
            long double diff = (arr[i+1]-arr[i]);
            long double seclen = diff/(long double)(howmany[i]+1);

            if(seclen>maxsec){
                maxsec = seclen;
                ind = i;
            }
        }
        howmany[ind]++;
    }

    long double maxans = -1;
    for(int i = 0;i<n-1;i++){
         long double diff = (arr[i+1]-arr[i]);
        long double seclen = diff/(long double)(howmany[i]+1);
            maxans = max(seclen,maxans);
    }
    return maxans;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    long double ans = minimiseMaxDistance(arr, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}