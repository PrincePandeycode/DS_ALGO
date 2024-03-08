#include <bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
   int maxrow = -1;
    int maxcount = INT_MIN;
    for(int i = 0;i<n;i++){
        int count = 0;
       int low = 0;
       int high = m-1;
       while(low<=high){
           int mid = (low+high)/2;
           if(matrix[i][mid] == 1){
               high = mid -1;
           }
           else{
               low = mid+1;
           }
       }
        count = m-high;
        if(count>maxcount){
            maxcount = count;
            maxrow = i;
        }
    
    }
    return maxrow;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
    int n = 3, m = 3;
    cout << "The row with maximum no. of 1's is: " <<
         rowWithMax1s(matrix, n, m) << '\n';
}
