#include<bits/stdc++.h>
using namespace std;


int FloorVal(vector<int> arr,int n,int x){
	int ans = -1;
	int high = n-1;
	int low = 0;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]<=x){
			ans = arr[mid];
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	return ans;
}
int CLval(vector<int> arr,int n,int x){
	int ans = -1;
	int low = 0;
	int high = n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]>=x){
			ans = arr[mid];
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	return ans;
}


pair<int,int> getFloorAndCeil(vector<int>&arr, int n , int x){
	pair<int,int> ans ;
	int fl = FloorVal(arr,n,x);
	int cl = CLval(arr,n,x);
	ans.first = fl;
	ans.second= cl;
	return ans;
}



int main() {
	vector<int> arr = {3, 4, 4, 7, 8, 10};
	int n = 6, x = 5;
	pair<int, int> ans = getFloorAndCeil(arr, n, x);
	cout << "The floor and ceil are: " << ans.first
	     << " " << ans.second << endl;
	return 0;
}