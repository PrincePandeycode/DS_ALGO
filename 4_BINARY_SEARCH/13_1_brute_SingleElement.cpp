#include<bits/stdc++.h>
using namespace std;

int FindEl(vector<int>&arr,int n ){

    
		if(n==1) return arr[0];
	    if(arr[0] != arr[1] ) return arr[0];
        
        if(arr[n-1]!=arr[n-2]) return arr[n-1];
        for(int i = 1;i<n-1;i++){

        if(arr[i] == arr[i-1] || arr[i] == arr[i+1]){
            continue;
        }
        else{
            return arr[i];
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1,1,2,2,3,3,4,5,5,6,6};
    int n = arr.size();
    int ans = FindEl(arr, n);
    cout<<ans;
}