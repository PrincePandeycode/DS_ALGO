#include<bits/stdc++.h>
using namespace std;

int BestProfit(vector<int>&Prices){
   int minimum =INT_MAX;
    int maxProfit = 0;
    for(int i = 0;i<Prices.size();i++){
        minimum = min(minimum,Prices[i]);
        maxProfit = max(maxProfit, Prices[i]-minimum);

    }
    return maxProfit;

}

int main(){
    vector<int> Prices = {7,1,5,3,6,4};
    int k = BestProfit(Prices);
    cout<<k;
}