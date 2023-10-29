#include<bits/stdc++.h>
using namespace std;

void Merrge(vector<int>&v, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <=mid && right <=high){
        if(v[left]<=v[right]) {
            temp.push_back(v[left]);
            left++;
        }
        else{
            temp.push_back(v[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(v[left]);
        left++;
    }
    while(right<= high){
        temp.push_back(v[right]);
        right++;
    }

   for(int i = low;i<=high;i++){
    v[i] = temp[i-low];
   }

}

void MergeSOrt(vector<int>&v, int low ,int high)
{
    if(low == high) return;
    int mid = (low+high)/2;
    MergeSOrt(v,low,mid);
    MergeSOrt(v,mid+1,high);
    Merrge(v,low,mid,high);
    
}
int main(){
    vector<int>v = {0,1,2,0,1,2,1,2,0,0,0,1};
    int n = v.size();
    vector<int> res;
    MergeSOrt(v,0,n-1);
    for(auto it : v){
        cout<<it<<" ";
    }
}