// Minimum number of coins to take to reach target sum

#include <bits/stdc++.h>
using namespace std;

// int mincoin(int target, vector<int> &arr)
// {
//     // Base Case
//     if (target == 0)
//     {
//         return 0;
//     }
//     if (target < 0)
//     {
//         return INT_MAX;
//     }
//     int mini = INT_MAX;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int ans = mincoin(target - arr[i], arr);
//         // I am able to hit the target
//         if (ans != INT_MAX)
//         {
//             mini = min(mini, 1 + ans);
//         }
//     }

//     return mini;
// }

// Top down approach
// int dpmincoin(int target, vector<int> &arr, vector<int> &dp)
// {
//     // Base Case
//     if (target == 0)
//     {
//         return 0;
//     }
//     if (target < 0)
//     {
//         return INT_MAX;
//     }
//     int mini = INT_MAX;
//     if (dp[target] != -1)
//     {
//         return dp[target];
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int ans = dpmincoin(target - arr[i], arr, dp);
//         // I am able to hit the target
//         if (ans != INT_MAX)
//         {
//             mini = min(mini, 1 + ans);
//         }
//     }

//     return dp[target] = mini;
// }

// Bottom Up
int budpmincoin(int t, vector<int> &arr)
{
    vector<int> dp(t + 1, INT_MAX);
    dp[0] = 0;

    for (int target = 1; target <= t; target++)
    {
        int mini = INT_MAX;
        for (int i = 0; i < arr.size(); i++)
        {
            if (target - arr[i] >= 0)
            {
                int ans = dp[target - arr[i]];

                if (ans != INT_MAX)
                {
                    mini = min(mini, 1 + ans);
                }
            }
        }
        dp[target] = mini;
    }
    return dp[t];
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);

    int target = 7;
    vector<int> dp(target + 1, -1);
    // int ans = dpmincoin(target, arr, dp);
    int ans = budpmincoin(target, arr);
    // int ans = mincoin(target, arr);

    cout << "Min coin required is " << ans << endl;
    return 0;
}