#include <bits/stdc++.h>
using namespace std;

// Top Down Approach
int solve(vector<int> val, vector<int> wt, int index, int capacity, vector<vector<int>> dp)
{
    // Base Case
    if (index == val.size() || capacity == 0)
    {
        return 0;
    }
    if (dp[index][capacity] != -1)
    {
        return dp[index][capacity];
    }
    int include = 0;

    if (capacity >= wt[index])
    {
        include = val[index] + solve(val, wt, index + 1, capacity - wt[index], dp);
    }
    int exclude = 0 + solve(val, wt, index + 1, capacity, dp);

    return dp[index][capacity] = max(include, exclude);
}
int main()
{
    int n = 3;
    vector<int> val, wt;

    val.push_back(60);
    val.push_back(100);
    val.push_back(120);

    wt.push_back(10);
    wt.push_back(20);
    wt.push_back(30);

    int capacity = 50;

    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, -1));
    int ans = solve(val, wt, 0, capacity, dp);
    cout << "Answer is " << ans << endl;
    return 0;
}