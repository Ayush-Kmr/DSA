#include <bits/stdc++.h>
using namespace std;

// max sum of alternative index value
int solve(vector<int> &arr, int index, vector<int> &dp)
{
    // base case
    if (index >= arr.size())
    {
        return 0;
    }
    if (dp[index] != -1)
    {
        return dp[index];
    }
    int include = arr[index] + solve(arr, index + 2, dp);
    int exclude = 0 + solve(arr, index + 1, dp);

    return dp[index] = max(include, exclude);
}

int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(9);

    vector<int> dp(arr.size() + 1, -1);
    cout << "Answer is " << solve(arr, 0, dp);

    return 0;
}
