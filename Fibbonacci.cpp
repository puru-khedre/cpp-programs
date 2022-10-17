#include <iostream>
using namespace std;
int recursive_func(int n);
int func(int n);

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
        cout << func(i) << " ";
    cout << endl;
    for (int i = 0; i <= n; i++)
        cout << recursive_func(i) << " ";
    return 0;
}

int recursive_func(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return recursive_func(n - 1) + recursive_func(n - 2);
}
int func(int n)
{
    int first = 0;
    int second = 1;

    for (int i = 0; i < n; i++)
    {
        int temp = first;
        first = second;
        second = temp + second;
    }
    return first;
}