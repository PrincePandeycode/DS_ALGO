#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateninety(vector<vector<int>>&matrix, int n){
    for(int i = 1;i<n;i++){
        for(int j = 0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i = 0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }

    return matrix;
}

int main(){
    vector<vector<int>> matrix =  {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n = matrix.size();
    cout<<"original array : "<<endl;
    for(int i = 0;i<n;i++){
                for(int j = 0;j<n;j++){
                cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
            }

        vector<vector<int>> ans = rotateninety(matrix,n);
cout<<"rotated array : "<<endl;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
               cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }

    
    }