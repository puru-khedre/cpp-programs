#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b;
    cin >> a >> b;
    cout << "a = " << a << ",b = " << b<<endl;
    int swap = b;
    b = a;
    a = swap;
    cout << "a = " << a << ",b = " << b;
    return 0;
}