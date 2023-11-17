#include<bits/stdc++.h>
using namespace std;

int Longest(vector<int>&v){

    sort(v.begin(),v.end());
    int n = v.size();
    if(n == 0) return 0;
    int last_Smaller = INT_MIN;
    int longest = 1;
    int currentLong = 0;
    for(int i = 0;i<n;i++){
        if(v[i]-1 == last_Smaller){
            currentLong +=1;
            last_Smaller = v[i];
        }
         else if(v[i] == last_Smaller){
            
        }
        else if(v[i] != last_Smaller){
            last_Smaller = v[i];
            currentLong = 1;
        }
        longest = max(longest, currentLong);
    }
    return longest;

}
int main(){
    vector<int> v = {100,102,100,101,101,4,3,2,3,2,1,1,1,2};

    int ans = Longest(v);
    cout<<"The longest sequence is "<<ans;
}