#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{
    int count = 0;
    int pivotvalue = arr[start];
    for (int i = start; i <= end; i++)
    {
        if (arr[i] < pivotvalue)
        {
            count++;
        }
    }
    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);

    int i = start, j = end;
    while (i <= pivotIndex && j >= pivotIndex)
    {
        while (arr[i] <= pivotvalue)
        {
            i++;
        }
        while (arr[j] > pivotvalue)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quicksort(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivotIndex = partition(arr, start, end);
    quicksort(arr, start, pivotIndex - 1);
    quicksort(arr, pivotIndex + 1, end);
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

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
