//! *************************** Recursive Method ******************************
#include <iostream>
using namespace std;

int m, n, key;

bool search(int *mat, int row, int col)
{
    if (row < m && col >= 0)
    {
        if (key == *(mat + row * n + col))
        {
            return true;
        }
        if (key < *(mat + row * n + col))
        {
            return search(mat, row, --col);
        }
        if (key > *(mat + row * n + col))
        {
            return search(mat, ++row, col);
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

    cin >> m >> n >> key;

    int mat[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    int row = 0, col = n - 1;
    if (search(&mat[0][0], row, col))
        cout << "Element found";
    else
        cout << "Element does not exist.";
    return 0;
}

//? *************************** Direct Method ******************************
/* #include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int m, n, key;
    cin >> m >> n >> key;

    int mat[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    
    int row = 0, col = n - 1;
    while (row < m && col >= 0)
    {
        if (key == mat[row][col])
        {
            cout << "Element found";
            return 0;
        }
        if (key < mat[row][col])
        {
            col--;
            continue;
        }
        if (key > mat[row][col])
        {
            row++;
        }
    }

    cout << "Element does not exist";
    return 0;
} */