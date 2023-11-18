#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> setzero(vector<vector<int>> &matrix, int n, int m)
{
    // int col --> int matrix[0][..]
    // int row --> int matrix[..][0]
    int col1 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                // mark the row
                matrix[i][0] = 0;
                // mark the column
                if (j != 0)
                {
                    matrix[0][j] = 0;
                }
                else
                {
                    col1 = 0;
                }
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j] != 0)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[0][j] = 0;
        }
    }

    if (col1 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            matrix[i][0] = 0;
        }
    }
    return matrix;
}
int main()
{
    vector<vector<int>> matrix = {{1, 1, 1},
                                  {1, 0, 1},
                                  {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    cout << "Original matrix is " << endl;
    for (auto it : matrix)
    {
        for (auto element : it)
        {
            cout << element << " ";
        }
        cout << " \n";
    }

    vector<vector<int>> ans = setzero(matrix, n, m);
    cout << endl;

    for (auto it : ans)
    {
        for (auto element : it)
        {
            cout << element << " ";
        }
        cout << " \n";
    }
}