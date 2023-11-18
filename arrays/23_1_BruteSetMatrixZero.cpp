#include<bits/stdc++.h>
using namespace std;
 void setrow(vector<vector<int>>&matrix,int n,int m, int i){        //actually i is telling only those rows where row has  a zero and we can traverse those rows using j
    for(int j= 0;j<m;j++){
        if(matrix[i][j] !=0){
            matrix[i][j] = -1;
        }
    }

 }

 void setcol(vector<vector<int>>&matrix,int n,int m, int j){
        for(int i = 0;i<n;i++){
            if(matrix[i][j] != 0){
                matrix[i][j] = -1;
            }
        }
  }
 
 vector<vector<int>> setzero(vector<vector<int>>&matrix, int n, int m){

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(matrix[i][j] == 0){
                setrow(matrix, n,m, i);
                setcol(matrix, n,m, j);
            }
        }
    }


    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(matrix[i][j] == -1){
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