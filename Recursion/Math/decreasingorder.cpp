#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    // Base Case
    if (n == 0)
    {
        return;
    }
    cout << n << " ";

    // Recursive call
    print(n - 1);
}
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    cout << "Printing in decreasing order" << endl;
    print(n);
    cout << endl;
    return 0;
}