#include <bits/stdc++.h>
using namespace std;

string TwoSum(vector<int>&v, int target)
{
    sort(v.begin(), v.end());
    int n = v.size();
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        if (v[left] + v[right] == target)
        {
            return "yes";
        }

        else if (v[left] + v[right] < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return "no";
}

int main()
{
    vector<int> v = {2, 6, 5, 8, 11};
    int target = 14;
    string res = TwoSum(v, target);
    cout << res;
}