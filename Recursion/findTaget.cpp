#include <bits/stdc++.h>
using namespace std;

int findTarget(int arr[], int n, int index, int target)
{
    if (n == index)
    {
        return -1;
    }
    if (arr[index] == target)
    {
        return index;
    }
    else
    {
        findTarget(arr, n, index + 1, target);
    }
}
int main()
{
    int n;
    int index = 0;
    cout << "Enter the value of n :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target element of the array:";
    cin >> target;

    int indvalue = findTarget(arr, n, index, target);
    cout << "The index of the target value is :" << indvalue << endl;
    return 0;
}