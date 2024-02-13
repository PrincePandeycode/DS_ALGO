


#include <bits/stdc++.h>
using namespace std;

bool calculateDays(vector<int>&arr, int k, int m, int day){
	int count = 0;
	int bouques = 0;
	for(int i = 0;i<arr.size();i++){

		if(arr[i]<= day){
			count++;
		}
		else{
			bouques += (count/k);
			count = 0;
		}
		
	}
		bouques += (count/k);
		if(bouques >= m) return true;
		return false;

}

int roseGarden(vector<int> arr, int k, int m)

{
		int n = arr.size();
		if((m*k)>n) return -1;
		int mini = *min_element(arr.begin(),arr.end());
		int maxi = *max_element(arr.begin(),arr.end());
		int low = mini;
		int high = maxi;
		int ans = 0;
		while(low<=high){
			int mid = (low+high)/2;

			bool here = calculateDays(arr, k, m, mid);

			if(here == true){
				ans = mid;
				high = mid -1;

			}
			else{
				low = mid+1;
			}
		}
		return low;
}

int main()
{
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;
    int m = 2;
    int ans = roseGarden(arr, k, m);
    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
    return 0;
}
