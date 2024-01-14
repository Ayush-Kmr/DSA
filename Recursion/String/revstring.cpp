#include <bits/stdc++.h>
using namespace std;

// First approach
void reversestring(string &s, int i, int n)
{
    if (i >= n)
    {
        return;
    }
    swap(s[i], s[n - 1]);
    reversestring(s, i + 1, n - 1);
}

// Second approach
void solve(string s, int index, string &ans)
{
    if (index == s.length())
    {
        return;
    }
    // Head Recursion
    solve(s, index + 1, ans);
    ans.push_back(s[index]);
}
int main()
{
    string s;
    string ans = "";
    cout << "Enter the string" << endl;
    cin >> s;

    // reversestring(s, 0, s.length());
    // cout << s << endl;

    solve(s, 0, ans);
    cout << ans << endl;
    return 0;
}