


#include <bits/stdc++.h>
using namespace std;


bool ispossible(vector<int>&stalls,int k, int dist){
    int count = 1;
    int last = stalls[0];
    

    for(int i = 1;i<stalls.size();i++){
        if(stalls[i]-last>=dist){
            count++;
            last = stalls[i];
        }
    }
   
    if(count>=k) return true;
    return false;

}



int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int n = stalls.size();
    int maxi = stalls[n-1]-stalls[0];
    int ans = 0;
    for(int i = 1;i<=maxi;i++){
        if(ispossible(stalls,k,i) == true){
            
            ans = max(ans,i); 
            continue;
        }
        else{
           break;
        }
    }
    return ans; // or return maxi insted
}

int main()
{
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    int ans = aggressiveCows(stalls, k);
    cout << "The maximum possible minimum distance is: " << ans << "\n";
    return 0;
}
