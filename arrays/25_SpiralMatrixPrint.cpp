#include<bits/stdc++.h>
using namespace std;
vector<int> traverseSpiral(vector<vector<int>>&v,int n,int m){
    int top = 0;
    int bottom = n-1;
    int left = 0;
     int right = m-1;
     vector<int> ans;

     while(left<=right && top<= bottom){

     for(int i = left;i<=right;i++){
      
        ans.push_back(v[top][i]);

     }
     top++;
     for(int i = top;i<=bottom;i++){
        ans.push_back(v[i][right]);
     }
     right--;

     if(top<=bottom){

     for(int i = right;i>=left;i--){
        ans.push_back(v[bottom][i]);
     }

     bottom--;
     }
     if(left<=right){
     for(int i = bottom;i>=top;i--){
        ans.push_back(v[i][left]);
     }
    left++;
     }
    
     }
      return ans;

}
int main(){
    vector<vector<int>> v = {{1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12},
                            {13,14,15,16}};

    int n = v.size();
    int m = v[0].size();

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<int> ans = traverseSpiral(v,n,m);
     cout<<endl<<endl;
    for(auto it : ans){
        cout<<it<<" ";
    }
}