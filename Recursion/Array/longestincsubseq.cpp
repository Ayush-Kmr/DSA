#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n, int curr, int prev)
{
    // Base case
    if (curr == n)
    {
        return 0;
    }

    // Include
    int pick = 0;
    if (prev == -1 || arr[curr] > arr[prev])
    {
        pick = 1 + solve(arr, n, curr + 1, curr);
    }

    // Exclude
    int notPick = 0 + solve(arr, n, curr + 1, prev);

    return max(pick, notPick);
}
int main()
{

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int curr = 0;
    int prev = -1;
    int ans = solve(arr, n, curr, prev);
    cout << "Longest Increasing Subsequence is : " << ans << endl;
    return 0;
}