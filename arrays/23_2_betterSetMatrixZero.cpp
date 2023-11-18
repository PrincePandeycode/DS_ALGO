#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> setzero(vector<vector<int>>&matrix, int n, int m){
    int row[n] = {0};
    int col[m] = {0};

    // use these if in any online platform m,n is not provide cause at compile time we do not know the values of m,n
    //  vector<int> row(n,0);
    // vector<int> col(m,0);
  
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(row[i] || col[j]){
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

int main(){
     vector<vector<int>> matrix = {{1, 1, 1},
                                {1, 0, 1}, 
                                {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    cout<<"Original matrix is "<<endl;
    for(auto it : matrix){
        for(auto element: it){
            cout<<element<<" ";
        }
        cout<<" \n";
    }

    vector<vector<int>> ans = setzero(matrix,n,m);
    cout<<endl;

    for(auto it : ans){
        for(auto element: it){
            cout<<element<<" ";
        }
        cout<<" \n";
    }
}