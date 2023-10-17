#include<bits/stdc++.h>
using namespace std;

void mergge(vector<int>&g1, int low, int mid, int high){

    int left = low;
    int right = mid+1;
    vector<int> temp;
    while(left<=mid && right<= high){
        if(g1[left]<=g1[right]){
            temp.push_back(g1[left]);
            left++;
        }
        else{
            temp.push_back(g1[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(g1[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(g1[right]);
        right++;
    }

    for(int i = low; i<=high; i++){
        g1[i] = temp[i-low];
    }
}

void MergeSort( vector<int> &g1 , int low, int high){
    if(low == high) return;
    int mid = (low+high)/2;
    MergeSort(g1,low,mid);
    MergeSort(g1,mid+1,high);
    mergge(g1,low,mid,high);
}


int main() {
     vector<int> g1;
     int n;
     cin>>n;
 
    for (int i = 0; i < n; i++){
        int num;
        cin>>num;
        g1.push_back(num);}

        MergeSort(g1,0,n-1);
 
    for(auto it: g1){
        cout<<it<<" ";
    }
    return 0;
}
