#include<bits/stdc++.h>
using namespace std;

int finddiv(vector<int>& arr,  int num){

	int sum = 0;

	for(int i = 0;i<arr.size();i++){
		int ceilvL = ceil((double)(arr[i])/(double)(num));
		sum += ceilvL;

	}
	return sum;
}

int smallestDivisor(vector<int>& arr, int limit)
{
	 int maxi = *max_element(arr.begin(),arr.end());

	int low = 1;
	int high = maxi;

	while(low<=high){
		int mid = (low+high)/2;
		int days = finddiv(arr,mid);

		if(days<=limit){
			high = mid-1;
		}
		else low = mid+1;
	}
    return low;
}
int main(){
    vector<int> arr = {1,2,5,9};
    int limit = 6;

    int ans = smallestDivisor(arr,limit);
    cout<<ans;
}