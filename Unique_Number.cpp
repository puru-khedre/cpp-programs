#include <iostream>
using namespace std;

int unique(int a[], int size)
{
    /* except *ONE elements all are present three times repeat in array */
    int unique = 0;
    for (int i = 0; i < 32; i++)
    {
        int sum = 0;
        for (int j = 0; j < size; j++)
        {
            sum += ((1 << i) & a[j]);
        }
        if (sum % 3 != 0)
            unique = ((1 << i) | unique);
    }
    return unique;
}

void Two_Unique(int a[], int size)
{
    /* except *TWO elements all are present two times repeat in array */
    int xorsum1 = 0, pos = 0;
    for (int i = 0; i < size; i++)
    {
        xorsum1 = xorsum1 ^ a[i];
    }
    while (!((1 << pos) & xorsum1))
    {
        pos++;
    }
    int xorsum2 = 0;
    for (int i = 0; i < size; i++)
    {
        if (!((1 << pos) & a[i]))
        {
            xorsum2 = xorsum2 ^ a[i];
        }
    }
    cout << xorsum2 << endl;
    cout << (xorsum2 ^ xorsum1) << endl;
}
int One_Unique(int a[], int size)
{
    /* except *ONE element all are present two times repeat in array */
    int xorsum1 = 0;
    for (int i = 0; i < size; i++)
    {
        xorsum1 = xorsum1 ^ a[i];
    }
    return xorsum1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a[] = {1, 2, 3, 2, 1, 4, 3};
    cout << One_Unique(a, 7) << endl;

    int b[] = {1, 2, 3, 5, 2, 1, 4, 6, 4, 3};
    Two_Unique(b, 10);

    int c[] = {1, 2, 3, 3, 2, 1, 2, 1, 23, 3};
    cout << unique(c, 10);

    return 0;
}