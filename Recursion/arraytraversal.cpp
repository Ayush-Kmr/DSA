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
    printarray(arr, n, index);
    return 0;
}