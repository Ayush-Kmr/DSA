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