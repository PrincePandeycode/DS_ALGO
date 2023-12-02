#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr) {
  sort(arr.begin(),arr.end());
  int n = arr.size();
  vector<vector<int>> ans;

  for(int i = 0;i<n;i++){
    int start = arr[i][0];
    int end = arr[i][1];
    if(!ans.empty() && ans.back()[1]>=end) continue;

    for(int j=i+1;j<n;j++){
        if(end>=arr[j][0]){
            end = max(end,arr[j][1]);
        }
        else break;
    }

    ans.push_back({start,end});
  }
  return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>> ans = mergeOverlappingIntervals(arr);
    cout << "The merged intervals are: " << "\n";
    for (auto it : ans) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;
    return 0;
}


