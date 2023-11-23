#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {
            long long res = 1;

            // calculating nCr:
            for (int i = 0; i < r; i++) {
                res = res * (n - i);
                res = res / (i + 1);
            }
            return res;
        }

    vector<int> getRow(int n) {

        
      
            vector<int> ans;
            // printing the entire row n:
            for (int c = 0; c <= n; c++) {
               int a = nCr(n , c );
               ans.push_back(a);
           
        }
        return ans;


        
    }

int main(){
    int row = 6;

    vector<int> ansRow = getRow(row);

    for(auto it : ansRow){
        cout<<it<<" ";
    }
}