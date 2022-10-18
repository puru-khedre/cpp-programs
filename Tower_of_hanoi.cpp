#include <iostream>
using namespace std;

void solver(int n, char src, char dest, char helper)
{
    if (n == 0)
        return;
    solver(n - 1, src, helper, dest);
    cout << src << " to " << dest << endl;
    solver(n - 1, helper, dest, src);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a;
    cin >> a;
    solver(a, 'A', 'C', 'B');
    return 0;
}