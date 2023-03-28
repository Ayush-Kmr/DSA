#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 2;
    while (i < x)
    {
        if (x % i == 0)
        {
            cout << "Not prime for" << i << endl;
        }
        else
        {
            cout << "Prime for" << i << endl;
        }
        i = i + 1;
    }
    return 0;
}