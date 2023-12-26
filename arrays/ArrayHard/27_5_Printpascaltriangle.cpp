#include<bits/stdc++.h>
using namespace std;

vector<int> rowval(int row){
    vector<int> ans ;
    ans.push_back(1);
    row = row+1;
    long long res = 1;


    for(int col = 1;col<row;col++){
        res = res * (row-col);
        res = res/col;
        ans.push_back(res);
    }
    return ans;
}

vector<vector<int>> pascalTriangle(int row){
    vector<vector<int>> ans;
    for(int i = 0;i<row;i++){
        ans.push_back(rowval(i));
    }

    return ans;
}

int main(){
    int row = 6;

    vector<vector<int>> ans  = pascalTriangle(row);

        for(int i = 0;i<ans.size();i++){
            for(int j = 0;j<=i;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
}