#include<bits/stdc++.h>
using namespace std;

double minimiseMaxDistance(vector<int> &arr, int k){
	int n = arr.size();
    vector<int> howmany(n-1,0);
    priority_queue<pair<long double,int>> pq;

    for(int i = 0;i<n-1;i++){
        pq.push({arr[i+1]-arr[i],i});
    }
    for(int gast = 1;gast<=k;gast++){
        auto tp = pq.top();
        pq.pop();

        int maxind = tp.second;

        howmany[maxind]++;

        long double diff = arr[maxind +1 ]- arr[maxind];
        long double maxlen = diff/(long double)(howmany[maxind] + 1);
        pq.push({maxlen,maxind});
    }
    return pq.top().first;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    long double ans = minimiseMaxDistance(arr, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}