#include <bits/stdc++.h>
using namespace std;

int solve(string x, string y, int i, int j)
{
    if (i == x.length())
    {
        return 0;
    }
    if (j == y.length())
    {
        return 0;
    }
    int ans = 0;

    // Match
    if (x[i] == y[j])
    {
        ans = 1 + solve(x, y, i + 1, j + 1);
    }
    else
    {
        ans = max(solve(x, y, i + 1, j), solve(x, y, i, j + 1));
    }
    return ans;
}
int main()
{

    string x = "abcdefc";
    string y = "acz";
    int i = 0;
    int j = 0;
    int ans = solve(x, y, i, j);
    cout << "Longest Common Subsequence is :" << ans << endl;
    return 0;
}