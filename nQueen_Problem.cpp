#include <iostream>
using namespace std;

bool isSafe(int **a, int x, int y, int n)
{
    for (int i = 0; i < x; i++)
    {
        if (a[i][y] == 1)
            return false;
    }
    int row = x, col = y;
    while (row >= 0 && col >= 0)
    {
        if (a[row][col])
            return false;
        row--;
        col--;
    }
    row = x, col = y;
    while (row >= 0 && col < n)
    {
        if (a[row][col])
            return false;
        row--;
        col++;
    }
    return true;
}

bool nQueen(int **a, int x, int n)
{
    if (x >= n)
    {
        return true;
    }

    for (int col = 0; col < n; col++)
    {
        if (isSafe(a, x, col, n))
        {
            a[x][col] = 1;
            if (nQueen(a, x + 1, n))
            {
                return true;
            }
            a[x][col] = 0;
        }
    }
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}