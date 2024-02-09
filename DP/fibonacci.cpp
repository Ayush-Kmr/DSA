#include <bits/stdc++.h>
using namespace std;

// Top Down Approach
// Recursion + Memoization
// Step:1 Create an array + pass in function
// Step:2 Store the answer in dp array
// Step:3 Check if dp array already has answer, if yes then return
//. Just after the base cases

int fibonacci(int n, vector<int> &dp)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    // Step 3
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int ans = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);

    // Step 2
    return dp[n] = ans;
}

// Bottom-Up Approach
// Step1: dp array creation
// Step2: Base case analysis of Recursion and update dp array accordingly
// Step#: find the range for the changing variable and copy paste the logic and accordingly

int solveTab(int n)
{
    // step1: create dp array

    // step2: Update the dp array , basis on recursion base case
    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = 1;

    // Step3: Find range and copy paste
    for (int i = 2; i <= n; i++)
    {
        int ans = dp[i - 1] + dp[i - 2];
        dp[i] = ans;
    }
    return dp[n];
}
int main()
{

    int n;
    cout << "Enter the value of n for the fibonacci: ";
    cin >> n;

    // Step1
    // vector<int> dp(n + 1, -1);

    // cout << "Value of the given term is " << fibonacci(n, dp);

    cout << "Value of the given term is " << solveTab(n);
    return 0;
}