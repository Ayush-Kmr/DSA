#include <bits/stdc++.h>
using namespace std;

// Top Down Approach
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

// Bottom Up Approach
int solveTab(vector<int> arr)
{
    vector<int> dp(arr.size() + 2, 0);
    int n = arr.size();
    for (int index = n - 1; index >= 0; index--)
    {
        int include = arr[index] + dp[index + 2];
        int exclude = 0 + dp[index + 1];

        dp[index] = max(include, exclude);
    }
    return dp[0];
}
int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(9);

    vector<int> dp(arr.size() + 1, -1);
    // cout << "Answer is " << solve(arr, 0, dp);
    cout << "Answer is " << solveTab(arr);

    return 0;
}
