#include <bits/stdc++.h>
using namespace std;

// this is for adding the positive integers

void addstring(string x, string y, int carry, int i, int j, string &ans)
{
    if (i < 0 && j < 0 && carry == 0)
    {
        return;
    }
    int first, second;
    if (i >= 0)
    {
        first = x[i] - '0';
    }
    if (j >= 0)
    {
        second = y[j] - '0';
    }

    int sum = first + second + carry;
    int lastdigit = sum % 10;
    carry = sum / 10;

    ans.push_back(lastdigit + '0');

    reverse(ans.begin(), ans.end());
    addstring(x, y, carry, i - 1, j - 1, ans);
}
int main()
{
    string x, y;
    string ans = "";
    int carry = 0;

    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    addstring(x, y, carry, x.length() - 1, y.length() - 1, ans);

    cout << ans << endl;
    return 0;
}