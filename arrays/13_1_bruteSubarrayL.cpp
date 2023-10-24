#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> v, int k)
{

    int len = 0;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {

            int sum = 0;
            for (int f = i; f <= j; f++)
            {
                sum += v[f];
            }
            if (sum == k)
            {
                len = max(len, j - i + 1);
            }
        }
    }

    return len;
}
int main()
{

    vector<int> v = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int k = 3;
    int len = longestSubarray(v, k);

    cout << "max element of subarray are " << len;
}