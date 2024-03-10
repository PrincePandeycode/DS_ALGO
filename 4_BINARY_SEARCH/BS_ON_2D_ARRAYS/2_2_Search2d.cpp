#include <bits/stdc++.h>
using namespace std;

 bool binaryS(vector<int>&matrix, int target){
        int n = matrix.size();
        int low= 0,high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(matrix[mid] == target) return true;
            else if(matrix[mid]> target) high = mid-1;
            else low = mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0;i<n;i++){
           if(matrix[i][0] <= target && target<=matrix[i][m-1]){
               return binaryS(matrix[i],target);
           }
        }
        return false;
    }

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    searchMatrix(matrix, 8) == true ? cout << "true\n" : cout << "false\n";
}
