#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    int ans = fibonacci(n - 1) + fibonacci(n - 2);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of n for the fibonacci: ";
    cin >> n;
    cout << "Value of the given term is " << fibonacci(n);
    return 0;
}