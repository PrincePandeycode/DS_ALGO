
#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr) {
    int n = arr.size(); // size of the array.
    int mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        // Always keep the minimum.
        mini = min(mini, arr[i]);
    }
    return mini;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findMin(arr);
    cout << "The minimum element is: " << ans << "\n";
    return 0;
}

