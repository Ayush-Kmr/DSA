#include <bits/stdc++.h>
using namespace std;

void subsequence(string str, int index, string ans)
{
    if (index == str.length())
    {
        cout << ans << " ";
        return;
    }

    // Include the string characters
    subsequence(str, index + 1, ans + str[index]);

    // Exclude the character of string
    subsequence(str, index + 1, ans);
}
int main()
{
    string str;
    string ans = "";
    cout << "Enter the value of string: ";
    cin >> str;

    subsequence(str, 0, ans);
    return 0;
}