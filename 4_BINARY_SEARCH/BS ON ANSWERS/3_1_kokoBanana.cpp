#include<bits/stdc++.h>
using namespace std;
int calc(vector<int>& piles, int h, int i) {
    int time = 0;
    for(int j = 0; j < piles.size(); j++) {
        int val = ceil((double)piles[j] / i);
        time += val;
        if(time > h) 
            break;
    }
    return time;
}

int minTime(vector<int>& piles, int h) {
    int maxi = *max_element(piles.begin(), piles.end());

    for(int i = 1; i <= maxi; i++) {
        int timetaken = calc(piles, h, i);
        if(timetaken <= h)
          return i;
            
            
    }
    return -1;
}

int main(){
    vector<int> piles = {3,6,7,11};
    int h = 8;

    int ans = minTime(piles,h);

    cout<<ans;

}