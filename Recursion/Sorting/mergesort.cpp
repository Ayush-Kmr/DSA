
// ======== Merge Sort ==========

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    int n = end - start + 1;
    int temp[n];

    int i = start, j = mid + 1, k = 0;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= end)
    {
        temp[k++] = arr[j++];
    }

    for (i = 0; i < n; i++)
    {
        arr[start + i] = temp[i];
    }

    free(temp);
}

void mergesort(vector<int> &arr, int start, int end)
{
    cout << "Received a call for start -> " << start << " end->" << end << endl;
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;

    // Left part
    mergesort(arr, start, mid);

    // Right Part
    mergesort(arr, mid + 1, end);

    // Merging both the parts in sorted way
    merge(arr, start, mid, end);
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

    mergesort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
