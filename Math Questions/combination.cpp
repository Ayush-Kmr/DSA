#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int numerator = factorial(n);

    int denominator = factorial(r) * factorial(n - r);

    int ans = numerator / denominator;

    return ans;
}
int main()
{
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;
    cout << "Enter the value of r: ";
    cin >> r;

    int answer = nCr(n, r);
    cout << "The value of nCr is: " << answer << endl;
    return 0;
}