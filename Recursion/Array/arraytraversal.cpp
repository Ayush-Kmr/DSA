#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n, int index)
{
    if (index == n)
    {
        return;
    }
    cout << arr[index] << " ";
    printarray(arr, n, index + 1);
};

void travArray(int arr[], int size)
{
    if (size == 0)
    {
        return;
    }
    cout << arr[0] << " ";
    travArray(arr + 1, size - 1);
};

void rivPrint(int arr[], int index)
{
    if (index < 0)
    {
        return;
    }
    cout << arr[index] << " ";
    rivPrint(arr, index - 1);
};
int main()
{
    int n;
    int index = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the value of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // printarray(arr, n, index);
    // rivPrint(arr, n - 1);
    travArray(arr, n);
    return 0;
}