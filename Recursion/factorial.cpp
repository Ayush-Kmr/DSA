#include <bits/stdc++.h>
using namespace std;

// This code is valid for the factorial number upto 13 only
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    int fact = n * factorial(n - 1);
    return fact;
};
int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    int ans = factorial(n);
    cout << "Factorial of " << n << " is " << ans << endl;
    return 0;
}