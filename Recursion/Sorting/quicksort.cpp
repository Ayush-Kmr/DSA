#include <bits/stdc++.h>
using namespace std;

void partition(vector<int> &arr, int start, int end)
{
}
void quicksort(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivotIndex = partition(arr, start, end);
    quicksort(arr, start, p - 1);
    quicksort(arr, p + 1, end);
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quicksort(arr, 0, n - 1);
    return 0;
}