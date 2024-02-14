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

	for(int i = 1;i<=maxi;i++){
        if(finddiv(arr,i)<=limit) return i;
    }
    return 1;
}
int main(){
    vector<int> arr = {1,2,5,9};
    int limit = 6;

    int ans = smallestDivisor(arr,limit);
    cout<<ans;
}