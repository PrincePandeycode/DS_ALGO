#include <bits/stdc++.h>
using namespace std;

int Missing(int arr[], int s, int n)
{
    for (int i = 1; i <= n; i++)
    {
        int find = 0;
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[j] == i)
            {
                find = 1;
                break;
            }
        }
        if (find == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2, 4, 3};
    int s = sizeof(arr) / sizeof(arr[0]);
    int n = 5;
    int find;
    find = Missing(arr, s, n);

    cout << "the missing value is " << find;
}