#include<bits/stdc++.h>
using namespace std;

int BestProfit(vector<int>&Prices){
    int n = Prices.size();
      int maxprofit = 0;
    for(int i = 0;i<n-1;i++){
        int Profit = 0;
        for(int j = i+1;j<n;j++){
            if(Prices[i]<Prices[j]){
                Profit = Prices[j]-Prices[i];
                maxprofit = max(maxprofit,Profit);
            }
        }

    }
    return maxprofit;

}

int main(){
    vector<int> Prices = {7,1,5,3,6,4};
    int k = BestProfit(Prices);
    cout<<k;
}