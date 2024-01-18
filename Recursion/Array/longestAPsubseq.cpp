#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int i, int diff)
{
    if (i < 0)
    {
        return 0;
    }

    int ans = 0;
    // Backward Check
    for (int k = i - 1; k >= 0; k--)
    {
        if (arr[i] - arr[k] == diff)
        {
            // number in AP found
            ans = max(ans, 1 + solve(arr, k, diff));
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int difference = arr[j] - arr[i];
            // Catch here: add 2 for elements
            ans = max(ans, 2 + solve(arr, i, difference));
        }
    }

    cout << "Printing ans :" << ans << endl;

    return 0;
}