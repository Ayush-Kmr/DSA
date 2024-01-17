#include <bits/stdc++.h>
using namespace std;

bool binarysearch(int arr[], int start, int end, int target)
{
    if (start > end)
    {
        return false;
    }
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] == target)
        {
            return true;
        }

        // Left Part
        else if (target < arr[mid])
        {
            return binarysearch(arr, start, mid - 1, target);
        }
        else
        {
            return binarysearch(arr, mid + 1, end, target);
        }
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the sorted value of the array for search :" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target element to search in this array: ";
    cin >> target;
    cout << "Ans is " << binarysearch(arr, 0, n - 1, target);
    return 0;
}