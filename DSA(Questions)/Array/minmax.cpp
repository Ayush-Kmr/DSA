#include <bits/stdc++.h>
using namespace std;

// Largest Element of the array
int getMax(int arr[], int x)
{
    int max = INT_MIN;
    for (int i = 0; i < x; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    return max;
}

// Smallest element of the array
int getMin(int arr[], int x)
{
    int min = INT_MAX;
    for (int i = 0; i <= x; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[100];
    int x;
    cout << "Enter the size of the array: ";
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    cout << "Largest element of the array is: " << getMax(arr, x) << endl;
    cout << "Smallest element of the array is: " << getMin(arr, x) << endl;
    return 0;
}