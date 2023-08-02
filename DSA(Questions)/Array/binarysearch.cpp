#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // When key is greater then mid-value
        if (key > mid)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int arr[100];
    int size, key;
    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the array either in ascending order or descending order: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Entered array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Enter the value for searching it's index value: ";
    cin >> key;

    int index = binarySearch(arr, size, key);
    cout << "Index of the " << key << " is " << index << endl;
    return 0;
}