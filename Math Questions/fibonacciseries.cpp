#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter the number for its series: ";
    cin >> x;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= x; i++)
    {
        int nextnum = a + b;
        cout << nextnum << " ";
        a = b;
        b = nextnum;
    }
    return 0;
}