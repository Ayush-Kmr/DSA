#include <bits/stdc++.h>
using namespace std;

int maxElement(int arr[], int n, int index)
{
    if (index == n)
    {
        return INT_MIN;
    }
    int ans = arr[index];
    int recvalue = maxElement(arr, n, index + 1);
    int maxvalue = max(ans, recvalue);
    return maxvalue;
}

// Another method

void getMax(int arr[], int n, int index, int &maxi)
{
    if (index == n)
    {
        return;
    }
    maxi = max(maxi, arr[index]);
    getMax(arr, n, index + 1, maxi);
}
int main()
{
    int n;
    int index = 0;
    int maxi = INT_MIN;
    cout << "Enter the value of n : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int finalans = maxElement(arr, n, index);
    // cout << "MAX element of the given array is :" << finalans << endl;

    getMax(arr, n, index, maxi);
    cout << "The largest element of this array is: " << maxi << endl;
    return 0;
}